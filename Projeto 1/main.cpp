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
    tEstoqueMinisterio estoque;

    do {

        cout << "Sistema de Gerenciamento de Distribuição de Insumos" << endl << endl;  
        printOpcoesGerais();

        lerInt(opcao);
        switch(opcao) {
            case 1:
                cadastrarInsumo(estoque);
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
    } while(opcao != 5);


    return 0;
}