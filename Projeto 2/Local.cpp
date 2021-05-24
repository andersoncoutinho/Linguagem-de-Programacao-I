#include "Local.h"  
	
Local::Local() {
	this->tipo = 0;
}
	
Local::~Local() {
	
}

std::string Local::getInsumo() {
	//return insumoP->getDescricao();
}

std::string Local::descricaoGeral() {
	
}

void Local::SomaTotal() {
	float soma = 0;

	for(int i = 0 ; i < insumos.size(); i++) {
		soma += insumos[i]->getQuantidade();
		insumos[i]->incrementaSomaTotal(soma);
	}
}