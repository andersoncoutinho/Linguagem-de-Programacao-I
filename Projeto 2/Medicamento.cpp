#include "Medicamento.h"  
	
Medicamento::Medicamento() {
<<<<<<< HEAD
	
=======
	Insumo();
>>>>>>> 3d316987f79006c791938d089d2923db3aa4313d
}
	
Medicamento::~Medicamento() {
	
}

Medicamento::Medicamento(std::string tipo, std::string dosagem, std::string administracao, std::string disponibilizacao) {
    this->tipo = tipo;
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
    "Tipo: " + tipo + "\n" +
    "Dosagem: " + dosagem + "\n" +
    "Administração: " + administracao + "\n" +
    "Disponibilização: " + disponibilizacao + "\n\n";
}

std::string Medicamento::getTipoInsumo() {
    return "Medicamento";
}