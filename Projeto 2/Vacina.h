#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"	

class Vacina : public Insumo {
	private:
		std::string tecnologia;
		int quantDoses;
		int intervalo;
	public:
		Vacina();
		Vacina(std::string, int, int, std::string, std::string, std::string, int, int);
		std::string getConsulta();
		std::string getDescricao();
		std::string getTecnologia();
		virtual std::string getInfoArquivo();
		~Vacina();

};
#endif