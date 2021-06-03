#include "Medicamento.h"  

Medicamento::Medicamento() {
    
}

Medicamento::Medicamento(std::string nome, int quantidade, int valorUnitario,
                            std::string dtVencimento, std::string nomeFabricante,
                            std::string dosagem, std::string administracao, std::string disponibilizacao)
                            : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante) {

    this->tipoInsumo = MEDICAMENTO;
    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;

}

std::string Medicamento::getConsulta() {
    std::string consulta = "Medicamento: " + this->nome + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n\n";

    return consulta;
}

std::string Medicamento::getDescricao() {
    std::string desc = Insumo::getDescricao() +
    "Dosagem: " + dosagem + "\n" +
    "Administração: " + administracao + "\n" +
    "Disponibilização: " + disponibilizacao + "\n\n";

    return desc;
}

std::string Medicamento::getInfoArquivo(){
    
    std::string info;

    info = Insumo::getInfoArquivo() + dosagem + "," + administracao + "," + disponibilizacao + ",";

    return info;
}