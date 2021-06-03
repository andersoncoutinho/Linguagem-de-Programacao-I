#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include "Insumo.h"
#include <string>

class Medicamento : public Insumo {
	private:
		std::string dosagem;
		std::string administracao;
		std::string disponibilizacao;
	public:
		Medicamento();
		Medicamento(std::string nome, int quantidade, int valorUnitario,
                            std::string dtVencimento, std::string nomeFabricante, 
							std::string dosagem, std::string administracao, std::string disponibilizacao); 
		std::string getDisponibilizacao();
		std::string getConsulta();
		std::string getDescricao();
		virtual std::string getInfoArquivo();
};
#endif