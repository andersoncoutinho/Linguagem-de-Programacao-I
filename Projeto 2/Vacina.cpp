#include "Vacina.h"  
	
Vacina::Vacina() {
<<<<<<< HEAD
	
=======
    this->quantDoses = 0;
    this->intervalo = 0;
    Insumo();
>>>>>>> 3d316987f79006c791938d089d2923db3aa4313d
}
	
Vacina::~Vacina() {
	
}

Vacina::Vacina(std::string tipo, int quantDoses, int intervalo) {
    this->tipo = tipo;
    this-> quantDoses = quantDoses;
    this-> intervalo = intervalo;
}

std::string Vacina::getConsulta() {
    std::string consulta = "Vacina: " + tipo + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n\n";

    return consulta;
}

std::string Vacina::getDescricao() {
    std::string desc = "Vacina: \n" +
    Insumo::getDescricao() + "\n" +
    "Tipo: " + tipo + "\n" +
    "Quantidade de doses: " + std::to_string(quantDoses) + "\n" +
    "Intervalo de dia: " + std::to_string(intervalo) + "\n\n";

    return desc;
}

std::string Vacina::getTipoInsumo() {
    return "Vacina";
}