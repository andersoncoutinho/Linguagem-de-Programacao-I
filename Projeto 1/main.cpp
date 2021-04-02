#include <iostream>
#include <vector>
#include "myLibrary.h"

using namespace std;

int main(void) {
    
    int opcao;

    do {

        limparTerminal();
        cout << "Sistema de Gerenciamento de Distribuição de Insumos" << endl << endl;  
        imprimirMenuDeOpcoesGeral();

        lerInteiro(opcao);
        switch(opcao) {
            case 1:
                cadastrarInsumo();
                break;
            case 2:
                consultarEstoque();
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

