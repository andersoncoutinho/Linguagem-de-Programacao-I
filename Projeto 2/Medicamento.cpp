#include "Medicamento.h"  
	
Medicamento::Medicamento(std::string nome, int quantidade, int valorUnitario,
                            std::string dtVencimento, std::string nomeFabricante, int tipoInsumo,
                            std::string dosagem, std::string administracao, std::string disponibilizacao)
                            : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo) {

    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;

}

std::string Medicamento::getConsulta() {
    std::string consulta = "Medicamento: " + tipo + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n\n";

    return consulta;
}

std::string Medicamento::getDescricao() {
    std::string desc = "Medicamento: \n" +
    Insumo::getDescricao() + "\n" +
    "Dosagem: " + dosagem + "\n" +
    "Administração: " + administracao + "\n" +
    "Disponibilização: " + disponibilizacao + "\n\n";

    return desc;
}

Medicamento::~Medicamento() {
	
}