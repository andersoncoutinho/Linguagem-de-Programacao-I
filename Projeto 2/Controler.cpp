#include "Controler.h"  
#define ESTQ 0
	
Controler::Controler() {
	
}
	
Controler::~Controler() {
	
}

std::string Controler::consultarInsumos(int i) {
	return locais[i].getDescricaoGeralInsumo();
	//Falta só testar e melhorar implementação
}

std::string Controler::consultarDescricao(Local local) {
	return "";
	//retornar a descrição de todas vacinas medicamento e epi
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