#ifndef EPI_H
#define EPI_H

#include "Insumo.h"
#include <string>

class Epi : public Insumo {
	private:
		std::string tipo;
		std::string descricao;
	public:
		Epi(std::string, int, int, std::string, std::string, std::string, std::string);
		std::string getConsulta();
		std::string getDescricao();

};

#endif