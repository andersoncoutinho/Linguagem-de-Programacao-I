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

std::string Insumo::getDescricao() {
    std::string desc = "Nome: " + nome + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n" +
    "Valor Unitário: " + std::to_string(valorUnitario) + "\n" +
    "Data de Vencimento: " + dtVencimento + "\n" +
    "Nome do fabricante: " + nomeFabricante + "\n";
    
    return desc;
}