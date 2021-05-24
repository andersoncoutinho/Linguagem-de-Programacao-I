#include "EPI.h"  
	
EPI::EPI() {
    Insumo();
}
	
EPI::~EPI() {
	
}

EPI::EPI(std::string tipo, std::string descricao) {
    this->tipo = tipo;
    this->descricao = descricao;
}
 
std::string EPI::getDescricao() {
    std::string desc = "EPI: \n" +
    Insumo::getDescricao() + "\n" +
    "Tipo: " + tipo + "\n" +
    "Descrição: " + descricao;
}