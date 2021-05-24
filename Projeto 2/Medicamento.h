#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include "Insumo.h"
#include <string>

class Medicamento : public Insumo {
	private:
		std::string tipo;
		std::string dosagem;
		std::string administracao;
		std::string disponibilizacao;
	public:

		Medicamento();
		~Medicamento();
		Medicamento(std::string tipo, std::string dosagem, std::string administracao, 
		std::string disponibilizacao);
		std::string getDescricao();

};
#endif