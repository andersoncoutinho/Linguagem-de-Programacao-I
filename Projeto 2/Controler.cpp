#include "Controler.h"  
#define ESTQ 0
	
Controler::Controler() {
	Local();
}
	
Controler::~Controler() {
	
}

std::string Controler::consultarInsumos(int i) {
	return locais[i].getDescricaoGeralInsumo();
	//Falta só testar e melhorar implementação
}

std::string Controler::consultarDescricao(Local local) {
	//retornar a descrição de todas vacinas medicamento e epi
}

Insumo Controler::consultarInsumos(Local local, int tipo) {
	//retornar a descrição de insumos de acordo com o tipo
} 

bool Controler::distribuirInsumo(std::string nome, int qtd, int local) {

	
}

void Controler::cadastrarInsumosMS(Insumo *ins){
	locais[ESTQ].getInsumos().push_back(ins);
}