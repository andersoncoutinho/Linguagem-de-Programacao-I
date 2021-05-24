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

int Vacina::getTipo() {
    return tipo;
}

int Vacina::getQuantidadeDoses() {
    return quantDoses;
}

int Vacina::getIntevalo() {
    return intervalo;
}