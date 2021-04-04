#include <iostream>
#include <string>
#include <stdio.h>
#include "myLibrary.h"
 
using namespace std;

bool ehInt(string valor) {
    for(int i = 0; i < valor.size(); i++) {
        if(!isdigit(valor[i])){
            return false;
        }
    }
    return true;
}

bool ehDouble(string valor) {
    int pontos = 0;
    for(int i = 0; i < valor.size(); i++) {
        if(valor[i] == '.') {
            pontos++;
        }
        if((!isdigit(valor[i]) && valor[i] != '.') || pontos > 1){
            return false;
        }
    }
    return true;
}

void lerInt(int &valor) {
    
    string dado;
    
    getline(cin, dado);
    while(!ehInt(dado)) {
        clear();
        cout << "Valor Inválido. Digite um número decimal." << endl;
        printOpcoesGerais();
        getline(cin, dado);
    }
    valor = stoi(dado);
    cout << endl;
}

void lerDouble(double &valor) {
    
    string dado;
    
    getline(cin, dado);
    while(!ehDouble(dado)) {
        clear();
        cout << "Valor Inválido. Digite um número com casas decimais separadas por ponto (.)." << endl;
        printOpcoesGerais();
        getline(cin, dado);
    }
    valor = stod(dado);
    cout << endl;
}


void printOpcoesGerais(){
    cout << "Menu de Opções" << endl << endl;
    cout << "1 - Cadastrar Insumo" << endl;
    cout << "2 - Consultar Estoque de Insumos" << endl;
    cout << "3 - Consultar Insumos Distribuídos" << endl;
    cout << "4 - Distribuir Insumos" << endl;
    cout << "5 - Sair" << endl;
    cout << endl;
    
    cout << "Escolha uma opção: ";
}

void clear() {
    system("clear");
}

void cadastrarInsumo(vector<tVacina> &vacinas,  vector<tMedicamento> &medicamentos, vector<tEpi> &epis) {
    int opcao;
    printOpcoesInsumos();
    lerInt(opcao);
    switch (opcao)
    {
    case 1:
        cadastrarVacina(vacinas);
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        break;
    }

}
void consultarEstoque() {

}

void consultarInsumosDistribuidos() {

}

void distribuirInsumo() {

}

void printOpcoesInsumos() {
    clear();
    cout << "Que tipo de insumo você deseja cadastrar?" << endl;
    cout << "1 - Vacina" << endl;
    cout << "2 - Medicamento" << endl;
    cout << "3 - EPI" << endl;
}

void cadastrarVacina(vector<tVacina> &vacinas) {
    clear();
    int qtd;
    cout << "Digite a quantidade de tipos de vacinas que deseja-se cadastrar" << endl;
    lerInt(qtd);
    
    for(int i = 0; i < qtd; i++) {
        
        tVacina vacina;
        cout << "Informe o nome da vacina: ";
        getline(cin, vacina.insumo.nome);
        // verificar se a vacina já está cadastrada
        cout << "Informe o preço da unidade: ";
        lerDouble(vacina.insumo.valorUnitario);
        cout << "Informe a quantidade de unidades da vacina a se cadastrar: ";
        lerInt(vacina.insumo.quantidade);
        cout << "Informe o fabricante: ";
        getline(cin, vacina.insumo.fabricante);

        cout << "Informe o tipo de tecnologia: ";
        getline(cin, vacina.tecnologia);
        cout << "Informe a quantidade de doses necessárias: ";
        lerInt(vacina.dosesNecessarias);
        if(vacina.dosesNecessarias > 1) {
            cout << "Informe o intervalo de dias entre as doses: ";
            lerInt(vacina.intervaloDeDias);
        } else {
            vacina.intervaloDeDias = 0;
        }
        vacinas.push_back(vacina);
    }
}

void cadastrarMedicamento(vector<tMedicamento> medicamentos) {
    clear();
    int qtd;
    cout << "Digite a quantidade de tipos de vacinas que deseja-se cadastrar" << endl;
    lerInt(qtd);
    
    for(int i = 0; i < qtd; i++) {
        
        tMedicamento medicamento;
        cout << "Informe o nome da vacina: ";
        getline(cin, medicamento.insumo.nome);
        // verificar se o medicamento já está cadastrada
        cout << "Informe o preço da unidade: ";
        lerDouble(medicamento.insumo.valorUnitario);
        cout << "Informe a quantidade de unidades da vacina a se cadastrar: ";
        lerInt(medicamento.insumo.quantidade);
        cout << "Informe o fabricante: ";
        getline(cin, medicamento.insumo.fabricante);

        cout << "Informe a dosagem: ";
        lerDouble(medicamento.dosagem);
        cout << "Informe a via de administração: ";
        // as vias de administração são limitadas, ajeite isso
        getline(cin, medicamento.viaDeAdministracao);
        cout << "Informe a forma de disponibilização: ";
        // as vias de administração são limitadas, ajeite isso
        getline(cin, medicamento.formaDeDisponibilizacao);
        medicamentos.push_back(medicamento);
    }
}

void consultarEstoque(tEstoqueMinisterio estoque) {

    for(int i = 0; i < estoque.vacina.size(); i++) {
        
        if(estoque.vacina[i].insumo.quantidade > 0) {

            cout << "Vacina: " << estoque.vacina[i].insumo.nome << endl;
            cout << "Quantidade: " << estoque.vacina[i].insumo.quantidade << endl;
            
        }
    }

    cout << endl;

    for(int i = 0; i < estoque.medicamento.size(); i++) {
        
        if(estoque.medicamento[i].insumo.quantidade > 0) {

            cout << "Vacina: " << estoque.medicamento[i].insumo.nome << endl;
            cout << "Quantidade: " << estoque.medicamento[i].insumo.quantidade << endl;

        }
    }

    cout << endl;

    for(int i = 0; i < estoque.epi.size(); i++) {
        
        if(estoque.epi[i].insumo.quantidade > 0) {

            cout << "Vacina: " << estoque.epi[i].insumo.nome << endl;
            cout << "Quantidade: " << estoque.epi[i].insumo.quantidade << endl;

        }
    }

    cout << endl;
}

void consultarDescricaoInsumos(tEstoqueMinisterio estoque) {

    for(auto vacina : estoque.vacina) {
        cout << "Nome: " << vacina.insumo.nome << endl;
        printf("Preço unitário: R$ %lf", vacina.insumo.valorUnitario);
        cout << "Vencimento: " << vacina.insumo.vencimento << endl;
        cout << "Fabricante " << vacina.insumo.fabricante << endl;

        cout << "Tecnologia"  << vacina.tecnologia << endl;
        cout << "Doses Necessárias: " << vacina.dosesNecessarias << endl;
        if(vacina.dosesNecessarias > 1) {
            cout << "Intervalo de dias entre as doses: " << vacina.intervaloDeDias << endl;
        }
    }

    cout << endl;
    

    for(auto medicamento : estoque.medicamento) {
        
        cout << "Nome: " << medicamento.insumo.nome << endl;
        printf("Preço unitário: R$ %lf", medicamento.insumo.valorUnitario);
        cout << "Vencimento: " << medicamento.insumo.vencimento << endl;
        cout << "Fabricante: " << medicamento.insumo.fabricante << endl;
        
        cout << "Dosagem: " << medicamento.dosagem << "mg" << endl;
        cout << "Via de administração: " << medicamento.viaDeAdministracao << endl;
        cout << "Forma de disponibilização" << medicamento.formaDeDisponibilizacao << endl;
    }
    
    cout << endl;

    for(auto epi : estoque.epi) {
        
        cout << "Nome: " << epi.insumo.nome << endl;
        printf("Preço unitário: R$ %lf", epi.insumo.valorUnitario);
        cout << "Vencimento: " << epi.insumo.vencimento << endl;
        cout << "Fabricante: " << epi.insumo.fabricante << endl;
        
        cout << "Tipo: " << epi.tipo << endl;
    }

    cout << endl;
}