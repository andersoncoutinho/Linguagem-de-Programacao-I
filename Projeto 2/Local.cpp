#include "Local.h"  
	
Local::Local() {
	this->tipo = 0;
}
	
Local::~Local() {
	
}

std::string Local::getInsumo(Insumo *insumoP) {
	return insumoP->getDescricao();
}