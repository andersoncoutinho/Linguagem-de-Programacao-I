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

std::string Local::getDescricaoInsumo() {
	std::string aux, vacina, medicamento, epi;

	for(int i = 0 ; i < insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == VACINA)
			vacina += insumos[i]->getDescricao();
		else if(insumos[i]->getTipoInsumo() == MEDICAMENTO)
			medicamento += insumos[i]->getDescricao();
		else if(insumos[i]->getTipoInsumo() == EPI)
			epi += insumos[i]->getDescricao();
	}

	aux = (vacina.size() != 0) ? "Vacinas: \n\n" + vacina : vacina; 
	aux += (medicamento.size() != 0) ? "Medicamentos: \n\n" + medicamento : medicamento;
	aux += (epi.size() != 0) ? "Epis: \n\n" + epi : epi;
	
	return aux;
}

std::string Local::getDescricaoTipoInsumo(int tipo) {
	std::string aux;

	switch (tipo) {
	case 1:
		aux = "Vacinas: \n\n";
		break;
	case 2:
		aux = "Medicamentos: \n\n";
		break;
	case 3:
		aux = "Epis: \n\n";
		break;
	default:
		break;
	}

	for(int i = 0 ; i < insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == tipo)
			aux += insumos[i]->getDescricao();
	}

	return aux;
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