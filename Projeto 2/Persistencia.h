#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "Controler.h"
#include <fstream>

class Persistencia {
	public:
		static void lerInsumos(Controler *controle);
        static bool salvarInsumos(Controler controle);

};
#endif
