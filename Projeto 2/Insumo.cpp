#include "Insumo.h"  
#include <string>

Insumo::Insumo() {

}

Insumo::Insumo(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante) {
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
}

int Insumo::getQuantidade() {
    return this->quantidade;
}

int Insumo::getTipoInsumo() {
    return this->tipoInsumo;
}

std::string Insumo::getDescricao() {
    std::string desc = "Nome: " + nome + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n" +
    "Valor Unitário: " + std::to_string(valorUnitario) + "\n" +
    "Data de Vencimento: " + dtVencimento + "\n" +
    "Nome do fabricante: " + nomeFabricante + "\n";    
    return desc;
}

std::string Insumo::getConsulta() {
    return "";
}

std::string Insumo::getTecnologia() {
    return "";
}

std::string Insumo::getNome() {
    return this->nome;
}

void Insumo::removerUnidades(int qtd) {
    this->quantidade -= qtd;
}

void Insumo::addUnidades(int qtd) {
    this->quantidade += qtd;
}

void Insumo::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

std::string Insumo::getInfoArquivo() {
    std::string info;

    info = nome + "," + 
           std::to_string(quantidade) + "," + 
           std::to_string(valorUnitario) + "," +
           dtVencimento + "," + 
           nomeFabricante + "," +
           std::to_string(tipoInsumo) + ",";
    
    return info;

}