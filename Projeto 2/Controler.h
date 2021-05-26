#ifndef CONTROLER_H
#define CONTROLER_H
#include <vector>
#include "Local.h"
#include "Insumo.h"
	
class Controler{
	private:
		Local locais[28];
	
	public:
		Controler();
		~Controler();
		std::string consultarInsumos(int i);
		std::string consultarDescricao(int i);
		Insumo consultarInsumos(Local local, int tipo);
		bool distribuirInsumo(std::string, int, int);
		void cadastrarInsumosMS(Insumo *);
		Local getLocal(int i);

};
#endif