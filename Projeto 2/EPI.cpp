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
 
std::string EPI::getDescricao() {
    std::string desc = "EPI: \n" +
    Insumo::getDescricao() + "\n" +
    "Descrição: " + descricao;
}