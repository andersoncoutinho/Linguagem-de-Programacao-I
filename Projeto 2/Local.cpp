#include "Local.h"  
	
Local::Local() {
	this->tipo = 0;
}
	
Local::~Local() {
	
}

std::string Local::getInsumo(Insumo *insumoP) {
	return insumoP->getDescricao();
}

float Local::getSomaTotal(Insumo *insumoP) {
	float soma = 0;

	soma += insumoP->getQuantidade();

	return soma;
}