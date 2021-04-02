#include <iostream>
#include <string>
#include "myLibrary.h"
 
using namespace std;

bool ehInteiro(string valor) {
    for(int i = 0; i < valor.size(); i++) {
        if(!isdigit(valor[i])){
            return false;
        }
    }
    return true;
}

void lerInteiro(int &valor) {
    
    string dado;
    
    getline(cin, dado);
    while(!ehInteiro(dado)) {
        limparTerminal();
        cout << "Valor Inválido. Tente novamente." << endl;
        imprimirMenuDeOpcoesGeral();
        getline(cin, dado);
    }
    valor = stoi(dado);
}

void imprimirMenuDeOpcoesGeral(){
    cout << "Menu de Opções" << endl << endl;
    cout << "1 - Cadastrar Insumo" << endl;
    cout << "2 - Consultar Estoque de Insumos" << endl;
    cout << "3 - Consultar Insumos Distribuídos" << endl;
    cout << "4 - Distribuir Insumos" << endl;
    cout << "5 - Sair" << endl;
    cout << endl;
    
    cout << "Escolha uma opção: ";
}

void limparTerminal() {
    system("clear");
}

void cadastrarInsumo() {

}
void consultarEstoque() {

}

void consultarInsumosDistribuidos() {

}

void distribuirInsumo() {

}
