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
	return locais[i].getDescricaoGeralInsumo();
}

std::string Controler::consultarTipoInsumos(int i, int tipo) {
	return locais[i].getDescricaoTipoInsumo(tipo);
} 

bool Controler::distribuirInsumo(std::string nome, int qtd, int local) {

	return false;
}

void Controler::cadastrarInsumosMS(Insumo *ins){
	locais[ESTQ].getInsumos()->push_back(ins);
}

Local Controler::getLocal(int i) {
	return locais[i];
}