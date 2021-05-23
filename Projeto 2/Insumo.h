#ifndef INSUMO_H
#define INSUMO_H

#include <string>

class Insumo {
        protected:
                std::string nome;
                int quantidade;
                int valorUnitario;
                std::string dtVencimento;
                std::string nomeFabricante;
                int tipoInsumo;
        public: 
        	Insumo();
        	~Insumo();

};

#endif