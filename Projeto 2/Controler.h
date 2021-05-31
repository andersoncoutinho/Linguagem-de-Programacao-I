#ifndef CONTROLER_H
#define CONTROLER_H
#include <vector>
#include <string>
#include "Local.h"
#include "Insumo.h"

#define ESTQ 0
#define QTD_ESTADOS 28
	
class Controler{
	private:
		Local locais[QTD_ESTADOS];
        std::string nomesLocais[QTD_ESTADOS] = { "Ministério da Saúde",
                                        "Acre", "Alagoas", "Amapá",
                                        "Amazonas", "Bahia", "Ceará",
                                        "Distrito Federal", "Espírito Santo",
                                        "Goiás", "Maranhão", "Mato Grosso",
                                        "Mato Grosso do Sul", "Minas Gerais",
                                        "Pará", "Paraíba", "Paraná",
                                        "Pernambuco", "Piauí", "Rio de Janeiro",
                                        "Rio Grande do Norte", "RS",
                                        "Rondônia", "Roraima",
                                        "Santa Catarina", "São Paulo",
                                        "Sergipe", "Tocantins"};
	
	public:
		Controler();
		~Controler();
		std::string consultarInsumos(int);
        std::vector<Insumo *> consultarInsumos2(int);
		std::string consultarDescricao(int);
		std::string consultarTipoInsumos(int, int);
        std::vector<Insumo *> consultarTipoInsumos2(int, int);
        int distribuirInsumo(std::string, int, int);
		int cadastrarInsumosMS(Insumo *);
        int cadastrarInsumosMS(Insumo *, int i);
		Local getLocal(int i);
        int getIndiceLocal(std::string local);
        void atualizarQtdInsumoMS(int, int);
        std::string getNomeLocal(int i);
};
#endif
