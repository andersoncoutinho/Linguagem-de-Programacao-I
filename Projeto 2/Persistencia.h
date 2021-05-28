#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "Controler.h"

class Persistencia {
	public:
		static void lerInsumos(Controler *controle);
        static void salvarInsumos(Controler controle);

};
#endif
