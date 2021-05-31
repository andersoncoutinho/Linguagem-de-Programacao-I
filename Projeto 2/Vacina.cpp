#include "Vacina.h"  

Vacina::Vacina() {
    
}

Vacina::Vacina(std::string nome, int quantidade, int valorUnitario, 
                std::string dtVencimento, std::string nomeFabricante,
                std::string tecnologia, int quantDoses, int intervalo)
                : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)  {
    
    this->tipoInsumo = VACINA;
    this->tecnologia = tecnologia;
    this-> quantDoses = quantDoses;
    this-> intervalo = intervalo;
}

std::string Vacina::getConsulta() {
    std::string consulta = "Vacina: " + this->nome + "\n" +
    "Quantidade: " + std::to_string(quantidade) + "\n\n";

    return consulta;
}

std::string Vacina::getDescricao() {
    std::string desc = Insumo::getDescricao() +
    "Tecnologia: " + tecnologia + "\n" +
    "Quantidade de doses: " + std::to_string(quantDoses) + "\n" +
    "Intervalo de dia: " + std::to_string(intervalo) + "\n\n";

    return desc;
}

std::string Vacina::getTecnologia() {
    return this->tecnologia;
}

std::string Vacina::getInfoArquivo(){

    std::string info;
    
    info = Insumo::getInfoArquivo() + 
           tecnologia + "," + 
           std::to_string(quantDoses) + "," + 
           std::to_string(intervalo) + ",";

    return info;
}

Vacina::~Vacina() {
	
}