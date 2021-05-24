#include "Medicamento.h"  
	
Medicamento::Medicamento() {
	Insumo();
}
	
Medicamento::~Medicamento() {
	
}

Medicamento::Medicamento(std::string dosagem, std::string administracao, std::string disponibilizacao) {
    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}

std::string Medicamento::getDescricao() {
    std::string desc = "Medicamento: \n" +
    Insumo::getDescricao() + "\n" +
    "Dosagem: " + dosagem + "\n" +
    "Administração: " + administracao + "\n" +
    "Disponibilização: " + disponibilizacao;
}