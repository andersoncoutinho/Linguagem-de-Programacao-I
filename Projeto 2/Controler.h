#ifndef CONTROLER_H
#define CONTROLER_H
#include <vector>
#include <string>
#include "Local.h"
#include "Insumo.h"
	
class Controler{
	private:
		Local locais[28];
        std::string nomesLocais[28] = { "Ministério da Saúde",
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
		std::string consultarDescricao(int);
		std::string consultarTipoInsumos(int, int);
        int distribuirInsumo(std::string, int, int);
		int cadastrarInsumosMS(Insumo *);
		Local getLocal(int i);
        int getIndiceLocal(std::string local);
        void atualizarQtdInsumoMS(int, int);
};
#endif
