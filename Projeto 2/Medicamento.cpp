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

std::string Medicamento::getDosagem() {
    return dosagem;
}

std::string Medicamento::getAdministracao() {
    return administracao;
}

std::string Medicamento::getDisponibilizacao() {
    return disponibilizacao;
}