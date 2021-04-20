#include <iostream>
#include <vector>
#include "biblioteca.h"

using namespace std;

int main(void) {

    tEstoqueMinisterio estoque;
    vector<tEstoqueEstados> estados(QTD_ESTADOS);
    inicializarEstados(estados);
    carregarDados(estoque, estados);
    
    int opcao;
    do {
        limparTerminal();
        cout << endl << "SISTEMA DE GERENCIAMENTO DE DISTRIBUIÇÃO DE INSUMOS" << endl << endl;  
        printOpcoesGerais();
        opcao = lerOpcao();
        switch(opcao) {
            case 1:
                cadastrarInsumo(estoque);
                salvar(estoque, estados);
                break;
            case 2:
                consultarEstoque(estoque);
                break;
            case 3:
                distribuirInsumo(estoque, estados);
                salvar(estoque, estados);
                break;
            case 4:
                consultarInsumosDistribuidos(estados);
                break;
            case 5:
                consultarDescricaoInsumos(estoque);
                break;
            case 6:
                consultarDescricaoInsumosUF(estados);
                break;
            case 7:
                consultarDescricaoInsumosPorUF(estados);
                break;
            case 8:
                cout << "Fechando Sistema ..." << endl;
                break;
            default: 
                cout << "Opção Inválida" << endl;
        }
    } while(opcao != 8);

    return 0;
}