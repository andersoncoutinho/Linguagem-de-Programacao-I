#include "EPI.h"  
	
EPI::EPI() {
	this->tipo = 0;
    Insumo();
}
	
EPI::~EPI() {
	
}

EPI::EPI(int tipo, std::string descricao) {
    this->tipo = tipo;
    this->descricao = descricao;
}

int EPI::getTipo() {
    return tipo;
}
 
std::string EPI::getDescricao() {
    return descricao;
}