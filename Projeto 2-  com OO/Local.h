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
		std::string getDescricaoTipoInsumo(int);
		std::string getDescricaoInsumo();
		Insumo* getInsumo(int);
        std::vector<Insumo*>* getInsumos();
        std::vector<Insumo*> getTipoInsumo(int);
		void addInsumo(Insumo *);
        int insumoExiste(std::string);
        std::string getNome();
        void setNome(std::string nome);

};
#endif
