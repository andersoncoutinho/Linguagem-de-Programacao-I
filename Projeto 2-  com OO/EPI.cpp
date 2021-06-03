#include "EPI.h"  

Epi::Epi() {

}	

Epi::Epi(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento,
            std::string nomeFabricante, std::string tipo, std::string descricao)
            : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante) {
    
    this->tipoInsumo = EPI;
    this->tipo = tipo;
    this->descricao = descricao;
}

std::string Epi::getConsulta() {
    std::string consulta = "EPI: " + this->nome + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n\n";

    return consulta;
}
 
std::string Epi::getDescricao() {
    std::string desc = Insumo::getDescricao() +
    "Tipo: " + tipo + "\n" +
    "Descrição: " + descricao + "\n\n";
    return desc;
}

std::string Epi::getInfoArquivo(){
    
    std::string info;

    info = Insumo::getInfoArquivo() + tipo + "," + descricao + ",";

    return info;
}
