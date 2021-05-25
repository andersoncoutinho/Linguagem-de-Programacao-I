#include "Local.h"  
#include <iostream>

Local::Local() {
	this->tipo = 0;
}
	
Local::~Local() {
	
}

std::string Local::getDescricaoGeralInsumo() {
	std::string aux, vacina, medicamento, epi;

	aux = "Vacinas:\n";

	for(int i = 0 ; i < insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == VACINA)
			aux += insumos[i]->getConsulta();
		
	}

	aux += "Medicamentos:\n";
	for(int i = 0 ; i< insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == MEDICAMENTO)
			aux += insumos[i]->getConsulta();
	}
	
	aux += "EPI:\n";

	for(int i = 0 ; i< insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == EPI)
			aux += insumos[i]->getConsulta();
	}

	//Encontrar uma forma de melhorar essa implementação
	
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