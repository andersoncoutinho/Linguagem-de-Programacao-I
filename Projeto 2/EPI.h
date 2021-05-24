#ifndef EPI_H
#define EPI_H

#include "Insumo.h"
#include <string>

class EPI : public Insumo {
	private:
		std::string tipo;
		std::string descricao;
	public:

		EPI();
		~EPI();
		EPI(std::string tipo, std::string descricao);
		std::string getConsulta();
		std::string getDescricao();
		std::string getTipoInsumo();

};
#endif