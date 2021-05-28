#include "Controler.h"  
#define ESTQ 0
#include <QMessageBox>

Controler::Controler() {
    for(int i = 0; i < 28; i++) {
        locais[i].setNome(nomesLocais[i]);
    }
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

    int i = locais[ESTQ].insumoExiste(nome);

    if(i >= 0) {
        if(qtd <= locais[ESTQ].getInsumo(i)->getQuantidade()) {
            locais[ESTQ].getInsumo(i)->removerUnidades(qtd);

            int j = locais[local].insumoExiste(nome);

            if(j >= 0) {

                locais[local].getInsumo(j)->addUnidades(qtd);
            } else {

                int indice = locais[local].getInsumos()->size();
                locais[local].getInsumos()->push_back(new Insumo());
                *locais[local].getInsumo(indice) = *locais[ESTQ].getInsumo(i);

                locais[local].getInsumo(indice)->setQuantidade(qtd);
            }

            return 1; // quando é feita a distribuição

        }

        return -1; // quando não há quantidade suficiente
    }

    return 0; // quando o insumo não existe no estoque
}

int Controler::cadastrarInsumosMS(Insumo *ins){

    int i = locais[ESTQ].insumoExiste(ins->getNome());

    if ( i >= 0 ) {   

        return i; // retorna o índice do insumo caso já exista
    }
    
    locais[ESTQ].addInsumo(ins);
    
        return -1;
}

void Controler::atualizarQtdInsumoMS(int i, int qtd){

    locais[ESTQ].getInsumo(i)->addUnidades(qtd);

}

Local Controler::getLocal(int i) {
	return locais[i];
}

int Controler::getIndiceLocal(std::string local) {

    for(int i = 1; i < 28; i++) {
        if(locais[i].getNome() == local) {
            return i; // indice do local
        }
    }

    return -1; // caso o local não exista
}
