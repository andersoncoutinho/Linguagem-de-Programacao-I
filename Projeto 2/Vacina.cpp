#include "Vacina.h"  
	
Vacina::Vacina() {
    this->tipo = 0;
    this->quantDoses = 0;
    this->intervalo = 0;
    Insumo();
}
	
Vacina::~Vacina() {
	
}

Vacina::Vacina(int tipo, int quantDoses, int intervalo) {
    this->tipo = tipo;
    this-> quantDoses = quantDoses;
    this-> intervalo = intervalo;
}

std::string Vacina::getDescricao() {
    std::string desc = "Vacina: \n" +
    Insumo::getDescricao() + "\n" +
    "Quantidade de doses: " + std::to_string(quantDoses) + "\n" +
    "Intervalo de dia: " + std::to_string(intervalo);
}