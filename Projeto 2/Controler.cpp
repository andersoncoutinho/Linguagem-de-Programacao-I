#include "Controler.h"  
#define ESTQ 0
	
Controler::Controler() {
	
}
	
Controler::~Controler() {
	
}

std::string Controler::consultarInsumos(int i) {
	return locais[i].getDescricaoGeralInsumo();
	//Falta só mudar os nomes das funções para nomes mais significativos
}

std::string Controler::consultarDescricao(int i) {
	return locais[i].getDescricaoInsumo();
}

std::string Controler::consultarTipoInsumos(int i, int tipo) {
	return locais[i].getDescricaoTipoInsumo(tipo);
} 

int Controler::distribuirInsumo(std::string nome, int qtd, int local) {

    if(int i = locais[ESTQ].insumoExiste(nome)) {
        if(qtd <= locais[ESTQ].getInsumo(i)->getQuantidade()) {
            locais[ESTQ].getInsumo(i)->removerUnidades(qtd);

            if(int j = locais[local].insumoExiste(nome)) {
                locais[local].getInsumo(j)->addUnidades(qtd);
            } else {
                locais[local].getInsumos()
                  ->push_back(locais[ESTQ].getInsumo(i));
                locais[local]
                 .getInsumo(locais[local].getInsumos()->size()-1)
                 ->setQuantidade(qtd);
            }

            return 1; // quando é feita a distribuição

        }

        return -1; // quando não há quantidade suficiente
    }

    return 0; // quando o insumo não existe no estoque
}

void Controler::cadastrarInsumosMS(Insumo *ins){
	locais[ESTQ].getInsumos()->push_back(ins);
}

Local Controler::getLocal(int i) {
	return locais[i];
}
