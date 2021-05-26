#include "Local.h"  
#include <iostream>

Local::Local() {
	this->tipo = 0;
}
	
Local::~Local() {
	
}

std::string Local::getDescricaoGeralInsumo() {
	std::string aux, vacina, medicamento, epi;

	for(int i = 0 ; i < insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == VACINA)
			vacina += insumos[i]->getConsulta();
		else if(insumos[i]->getTipoInsumo() == MEDICAMENTO)
			medicamento += insumos[i]->getConsulta();
		else if(insumos[i]->getTipoInsumo() == EPI)
			epi += insumos[i]->getConsulta();
	}

	aux = (vacina.size() != 0) ? "Vacinas: \n\n" + vacina : vacina; 
	aux += (medicamento.size() != 0) ? "Medicamentos: \n\n" + medicamento : medicamento;
	aux += (epi.size() != 0) ? "Epis: \n\n" + epi : epi;
	
	return aux;
}

std::string Local::descricaoTotal() {
	return "";
}

Insumo* Local::getInsumo(int pos){
	return insumos[pos];
}

std::vector<Insumo*>* Local::getInsumos(){
	return &insumos;
}

void Local::addInsumo(Insumo *insumo) {
	insumos.push_back(insumo);
}