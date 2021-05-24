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
		void consultarInsumos(Local);
		void consultarDescricao(Local);
		Insumo consultarInsumos(Local, int);

};
#endif