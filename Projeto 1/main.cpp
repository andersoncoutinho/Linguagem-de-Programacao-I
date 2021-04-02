#include <iostream>
#include <vector>
#include "myLibrary.h"

using namespace std;

int main(void) {

    while(true) {
        cout << "Sistema de Gerenciamento de Distribuição de Insumos" << endl << endl;
        int opcao;
        imprimirMenuDeOpcoesGeral();
        lerInteiro(opcao);

        switch(opcao) {
            default: 
                cout << "Opção Inválida" << endl;
        }
    }

    return 0;
}

