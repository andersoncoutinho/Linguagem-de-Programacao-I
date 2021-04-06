/*

*/
#include <iostream>
#include <vector>
#include <locale>
#include "myLibrary.h"

using namespace std;

int main(void) {
    // corrigir bug do enter no menu principal
    int opcao;
    vector<tVacina> vacinas;
    vector<tMedicamento> medicamentos;
    vector<tEpi> epis;
    tEstoqueMinisterio estoque;

    do {

        cout << "Sistema de Gerenciamento de Distribuição de Insumos" << endl << endl;  
        printOpcoesGerais();

        lerInt(opcao);
        switch(opcao) {
            case 1:
                cadastrarInsumo(vacinas, medicamentos, epis);
                break;
            case 2:
                consultarEstoque(estoque);
                break;
            case 3:
                consultarInsumosDistribuidos();
                break;
            case 4:
                distribuirInsumo();
                break;
            case 5:
                cout << "Fechando Sistema ..." << endl;
                break;
            default: 
                cout << "Opção Inválida" << endl;
        }
        
        //atualizando estoque
        estoque.vacina = vacinas;
        estoque.medicamento = medicamentos;
        estoque.epi = epis;

    } while(opcao != 5);


    return 0;
}