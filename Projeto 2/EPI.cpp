#include "EPI.h"  
	
EPI::EPI() {
<<<<<<< HEAD
	
=======
    Insumo();
>>>>>>> 3d316987f79006c791938d089d2923db3aa4313d
}
	
EPI::~EPI() {
	
}

EPI::EPI(std::string tipo, std::string descricao) {
    this->tipo = tipo;
    this->descricao = descricao;
}

std::string EPI::getConsulta() {
    std::string consulta = "EPI: " + tipo + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n\n";

    return consulta;
}
 
std::string EPI::getDescricao() {
    std::string desc = "EPI: \n" +
    Insumo::getDescricao() + "\n" +
    "Tipo: " + tipo + "\n" +
    "Descrição: " + descricao + "\n\n";
}

std::string EPI::getTipoInsumo() {
    return "EPI";
}