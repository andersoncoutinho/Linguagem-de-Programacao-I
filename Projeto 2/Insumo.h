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
        public: 
        	Insumo();
                ~Insumo();
                Insumo(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipoInsumo);
                float getQuantidade();
                float getSomaTotal();
                virtual std::string getTipoInsumo();
                virtual std::string getConsulta();
                virtual std::string getDescricao();
                virtual float incrementaSomaTotal(float soma);

};

#endif