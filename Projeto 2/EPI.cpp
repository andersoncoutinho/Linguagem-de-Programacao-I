#include "EPI.h"  
	

Epi::Epi(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento,
            std::string nomeFabricante, int tipoInsumo, std::string tipo, std::string descricao)
            : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo) {

    this->tipo = tipo;
    this->descricao = descricao;
}

std::string Epi::getConsulta() {
    std::string consulta = "EPI: " + tipo + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n\n";

    return consulta;
}
 
std::string Epi::getDescricao() {
    std::string desc = "EPI: \n" +
    Insumo::getDescricao() + "\n" +
    "Tipo: " + tipo + "\n" +
    "Descrição: " + descricao + "\n\n";
    return desc;
}