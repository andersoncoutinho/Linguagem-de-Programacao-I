#ifndef LOCAL_H
#define LOCAL_H
#include <string>
#include <vector>
#include "Insumo.h"
	
class Local {
	private:
		std::string nome;
		int tipo;
		std::vector<Insumo*> insumos;

	public:
		Local();
		~Local();
		std::string getDescricaoGeralInsumo();
		std::string descricaoTotal();
		Insumo* getInsumo(int);
		std::vector<Insumo*>* getInsumos();
		void addInsumo(Insumo *);

};
#endif