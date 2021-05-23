#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"	

class Vacina : public Insumo {
	private:
		int tipo;
		int quantDoses;
		int intervalo;
	public:

		Vacina();
		~Vacina();

};
#endif