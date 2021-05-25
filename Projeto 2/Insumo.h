#ifndef INSUMO_H
#define INSUMO_H

#include <string>

#define VACINA 1
#define MEDICAMENTO 2
#define EPI 3

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
                Insumo(std::string, int, int, std::string, std::string, int);
                int getQuantidade();
                virtual int getTipoInsumo();
                virtual std::string getConsulta();
                virtual std::string getDescricao();
                virtual std::string getTecnologia();

};

#endif