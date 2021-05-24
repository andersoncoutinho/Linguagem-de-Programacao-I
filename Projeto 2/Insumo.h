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
                Insumo(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, int tipoInsumo);
                std::string getNome();
                int getQuantidade();
                int getValorUnitario();
                std::string getDtVencimento();
                std::string getNomeFabricante();
                int getTipoInsumo();

};

#endif