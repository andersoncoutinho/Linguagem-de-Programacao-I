#ifndef INSUMO_H
#define INSUMO_H

#include <string>
#include <iostream>



#define VACINA 1
#define MEDICAMENTO 2
#define EPI 3

class Insumo {
        protected:
                std::string nome;
                int quantidade;
                double valorUnitario;
                std::string dtVencimento;
                std::string nomeFabricante;
                int tipoInsumo;
        public: 
                Insumo();
                Insumo(std::string, int, double, std::string, std::string);
                virtual int getQuantidade();
                virtual std::string getNome();
                virtual int getTipoInsumo();
                virtual std::string getConsulta();
                virtual std::string getDescricao();
                virtual std::string getTecnologia();
                virtual void removerUnidades(int qtd);
                virtual void addUnidades(int qtd);
                virtual void setQuantidade(int quantidade);
                virtual std::string getInfoArquivo();
                virtual void copiarInsumo(Insumo *insumo);
};

#endif
