/*

*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "myLibrary.h"

#define QTD_ESTADOS 27

using namespace std;

int main(void) {
    
    int opcao;
    tEstoqueMinisterio estoque;

    vector<tEstoqueEstados> estados(QTD_ESTADOS);
    inicializarEstados(estados);

    carregarDados(estoque, estados);

    do {

        cout << "Sistema de Gerenciamento de Distribuição de Insumos" << endl << endl;  
        printOpcoesGerais();
        cout << "Escolha uma opção: ";
        cin >> opcao;
        getchar();
        switch(opcao) {
            case 1:
                cadastrarInsumo(estoque);
                salvar(estoque, estados);
                break;
            case 2:
                consultarEstoque(estoque);
                //consultarDescricaoInsumos(estoque);
                break;
            case 3:
                consultarInsumosDistribuidos(estados);
                break;
            case 4:
                distribuirInsumo(estoque, estados);
                salvar(estoque, estados);
                break;
            case 5:
                consultarDescricaoInsumos(estoque);
                break;
            case 6:
                consultarDescricaoInsumosUF(estados);
                break;
            case 7:
                cout << "Fechando Sistema ..." << endl;
                break;
            default: 
                cout << "Opção Inválida" << endl;
        }
    } while(opcao != 7);

    return 0;
}