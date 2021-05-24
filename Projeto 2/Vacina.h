#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"	

class Vacina : public Insumo {
	private:
		std::string tipo;
		int quantDoses;
		int intervalo;
	public:

		Vacina();
		~Vacina();
		Vacina(std::string tipo, int quantDoses, int intervalo);
		std::string getConsulta();
		std::string getDescricao();
		std::string getTipoInsumo();

};
#endif