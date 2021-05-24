#include "Medicamento.h"  
	
Medicamento::Medicamento() {
	Insumo();
}
	
Medicamento::~Medicamento() {
	
}

Medicamento::Medicamento(std::string tipo, std::string dosagem, std::string administracao, std::string disponibilizacao) {
    this->tipo = tipo;
    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}

std::string Medicamento::getDescricao() {
    std::string desc = "Medicamento: \n" +
    Insumo::getDescricao() + "\n" +
    "Tipo: " + tipo + "\n" +
    "Dosagem: " + dosagem + "\n" +
    "Administração: " + administracao + "\n" +
    "Disponibilização: " + disponibilizacao;
}

std::string Medicamento::getTipoInsumo() {
    return "Medicamento";
}