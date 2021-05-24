#include "Insumo.h"  
#include <string>

Insumo::Insumo() {
    this->quantidade = 0;
    this->valorUnitario = 0;
    this->tipoInsumo = 0;
}
	
Insumo::~Insumo() {
	
}

Insumo::Insumo(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, int tipoInsumo) {
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipoInsumo = tipoInsumo;
}

std::string Insumo::getNome() {
    return nome;
}

int Insumo::getQuantidade() {
    return quantidade;
}

int Insumo::getValorUnitario() {
    return valorUnitario;
}

std::string Insumo::getDtVencimento() {
    return dtVencimento;
}

std::string Insumo::getNomeFabricante() {
    return nomeFabricante;
}

int Insumo::getTipoInsumo() {
    return tipoInsumo;
}
