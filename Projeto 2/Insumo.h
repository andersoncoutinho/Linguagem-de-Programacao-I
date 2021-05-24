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
                std::string tipoInsumo;
                float somaTotal;
        public: 
        	Insumo();
                ~Insumo();
                Insumo(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, int tipoInsumo);
                float getQuantidade();
                std::string getTipoInsumo();
                float getSomaTotal();
                virtual std::string getDescricao();
                virtual float incrementaSomaTotal(float soma);

};

#endif