/*

*/
#include <iostream>
#include <vector>
#include <locale>
#include "myLibrary.h"

#define QTD_ESTADOS 27

using namespace std;

int main(void) {
   
    int opcao;
    tEstoqueMinisterio estoque;
    vector<tEstoqueEstados> estados(QTD_ESTADOS);

    do {

        cout << "Sistema de Gerenciamento de Distribuição de Insumos" << endl << endl;  
        printOpcoesGerais();
        cout << "Escolha uma opção: ";
        cin >> opcao;
        getchar();
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
                distribuirInsumo(estoque, estados);
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