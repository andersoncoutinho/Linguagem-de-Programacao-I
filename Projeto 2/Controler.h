#ifndef CONTROLER_H
#define CONTROLER_H
#include <vector>
#include "Local.h"
#include "Insumo.h"
	
class Controler  
{
	private:
		std::vector<Local> locais;

	public:

		Controler();
		~Controler();
		std::string consultarInsumos();
		std::string consultarDescricao(Local local);
		Insumo consultarInsumos(Local local, int tipo);

};
#endif