#include "Vacina.h"  
	
Vacina::Vacina() {
    this->quantDoses = 0;
    this->intervalo = 0;
    Insumo();
}
	
Vacina::~Vacina() {
	
}

Vacina::Vacina(std::string tipo, int quantDoses, int intervalo) {
    this->tipo = tipo;
    this-> quantDoses = quantDoses;
    this-> intervalo = intervalo;
}

std::string Vacina::getDescricao() {
    std::string desc = "Vacina: \n" +
    Insumo::getDescricao() + "\n" +
    "Tipo: " + tipo + "\n" +
    "Quantidade de doses: " + std::to_string(quantDoses) + "\n" +
    "Intervalo de dia: " + std::to_string(intervalo);
}