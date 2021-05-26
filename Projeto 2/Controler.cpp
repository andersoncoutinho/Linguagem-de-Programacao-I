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

Insumo Controler::consultarInsumos(Local local, int tipo) {
	//retornar a descrição de insumos de acordo com o tipo
	return Insumo();
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