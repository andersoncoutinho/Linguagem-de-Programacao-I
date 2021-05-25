#include "Local.h"  
	
Local::Local() {
	this->tipo = 0;
}
	
Local::~Local() {
	
}

std::string Local::getInsumo() {
	std::string aux;

	aux = "Vacinas:\n";

	for(int i = 0 ; i< insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == "Vacina")
			aux += insumos[i]->getConsulta();
	}

	aux = "Medicamento:\n";

	for(int i = 0 ; i< insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == "Medicamento")
			aux += insumos[i]->getConsulta();
	}

	aux = "EPI:\n";

	for(int i = 0 ; i< insumos.size(); i++) {
		if(insumos[i]->getTipoInsumo() == "EPI")
			aux += insumos[i]->getConsulta();
	}

	//Encontrar uma forma de melhorar essa implementação
	
	return aux;
}

std::string Local::descricaoTotal() {
	
}

void Local::SomaTotal() {
	float soma = 0;

	for(int i = 0 ; i < insumos.size(); i++) {
		soma += insumos[i]->getQuantidade();
		insumos[i]->incrementaSomaTotal(soma);
	}
}

std::vector<Insumo*> Local::getInsumos(){
	return insumos;
}