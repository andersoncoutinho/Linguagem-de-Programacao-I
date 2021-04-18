#include <iostream>
#include <string>
#include <stdio.h>
#include "myLibrary.h"

#define QTD_ESTADOS 27
 
using namespace std;

bool insumoExiste(tDadosInsumos estoque, tDadosInsumos insumo) {
    return (!estoque.nome.compare(insumo.nome));
}

void printOpcoesGerais(){
    cout << "Menu de Opções" << endl << endl;
    cout << "1 - Cadastrar Insumo" << endl;
    cout << "2 - Consultar Estoque de Insumos" << endl;
    cout << "3 - Consultar Insumos Distribuídos" << endl;
    cout << "4 - Distribuir Insumos" << endl;
    cout << "5 - Sair" << endl;
    cout << endl;
}

void cadastrarInsumo(tEstoqueMinisterio &estoque) {
    
    int opcao;
    cout << "Que tipo de insumo você deseja cadastrar?" << endl;
    printOpcoesInsumos();
    cout << "Escolha uma opção: ";
    cin >> opcao;
    getchar();

    switch (opcao) {
    case 1:
        cadastrarVacina(estoque.vacina);
        break;
    case 2:
        cadastrarMedicamento(estoque.medicamento);
        break;
    case 3:
        cadastrarEpi(estoque.epi);
        break;
    case 4: 
        return;
    default:
        cout << "Opção Inválida" << endl;
        break;
    }

}
void consultarEstoque() {

}

void consultarInsumosDistribuidos(vector<tEstoqueEstados> estados) {

    int qtdVacina = 0;
    int qtdMedicamento = 0;
    int qtdEpi = 0;

    for(tEstoqueEstados estado : estados) {
        for(tVacina vacinas : estado.vacina) {
            qtdVacina += vacinas.insumo.quantidade;
        }
        for(tMedicamento medicamento : estado.medicamento) {
            qtdMedicamento += medicamento.insumo.quantidade;
        }
        for(tEpi epi : estado.epi) {
            qtdEpi += epi.insumo.quantidade;
        }
    }

    cout << "Quantidade de vacinas distribuídas: " << qtdVacina << endl;
    cout << "Quantidade de medicamentos distribuídos: " << qtdMedicamento << endl;
    cout << "Quantidade de EPIs distribuídos: " << qtdEpi << endl;
}


void distribuirInsumo(tEstoqueMinisterio &estoque, vector<tEstoqueEstados> &estados) {
    
    string sigla;
    int indice;
    cout << "Digite a sigla do estado para o qual se deseja distribuir o insumo: ";
    getline(cin, sigla);

    for(indice = 0; indice < QTD_ESTADOS; indice++) {
        if(estados[indice].sigla.find(sigla) != string::npos) {
            cout << "Que tipo de insumo deseja-se distribuir?" << endl;
            printOpcoesInsumos();
            cout << "Escolha uma opção: ";
            int opcao;
            cin >> opcao;
            getchar();
            switch (opcao) {
                case 1:
                    distribuirVacina(estoque.vacina, estados[indice].vacina);
                    break;
                case 2:
                    distribuirMedicamento(estoque.medicamento, estados[indice].medicamento);
                    break;
                case 3:
                    distribuirEpi(estoque.epi, estados[indice].epi);
                    break;
                case 4: 
                    return;
                default:
                    cout << "Opção Inválida" << endl;
                    break;
            }
        }
    }
}

void distribuirVacina(vector<tVacina> &vacinas, vector<tVacina> &vacinasUF) {
    
    cout << "Digite o nome da vacina que deseja-se distribuir: " << endl;
    string nome;
    bool vacinaExiste = false;
    getline(cin, nome);

    int i;
    for(i = 0; i < vacinas.size(); i++) {
        if(vacinas[i].insumo.nome.find(nome) != string::npos) {
            vacinaExiste = true;
            break;
        }
    }

    if(vacinaExiste) {
        int qtd;
        bool vacinaExisteUF = false;
        cout << "Digite a quantidade de vacinas que deseja-se enviar: ";
        cin >> qtd;
        getchar();

        if(vacinas[i].insumo.quantidade >= qtd) {
            
            vacinas[i].insumo.quantidade -= qtd;

            int indice;
            for(indice = 0; indice < vacinasUF.size(); indice++) {
                if(vacinasUF[indice].insumo.nome.find(vacinas[i].insumo.nome) != string::npos) {
                    vacinaExisteUF = true;
                    break;
                }
            }

            if(vacinaExisteUF) {
                vacinasUF[indice].insumo.quantidade += qtd;
            } else {
                vacinasUF.push_back(vacinas[i]);
                vacinasUF[vacinasUF.size()-1].insumo.quantidade = qtd;
            }

            cout << "Estoque de vacinas atualizado com sucesso!" << endl;


        } else {
            cout << "Quantidade de vacinas insuficiente" << endl;
        }

    } else {
        cout << "A vacina solicitada não existe em estoque" << endl;
    }

}

void distribuirMedicamento(vector<tMedicamento> &medicamentos, vector<tMedicamento> &medicamentosUF) {

    cout << "Digite o nome do medicamento que deseja-se distribuir: " << endl;
    string nome;
    bool medicamentoExiste = false;
    getline(cin, nome);

    int i;
    for(i = 0; i < medicamentos.size(); i++) {
        if(medicamentos[i].insumo.nome.find(nome) != string::npos) {
            medicamentoExiste = true;
            break;
        }
    }

    if(medicamentoExiste) {
        int qtd;
        bool medicamentoExisteUF = false;
        cout << "Digite a quantidade de vacinas que deseja-se enviar: ";
        cin >> qtd;
        getchar();

        if(medicamentos[i].insumo.quantidade >= qtd) {
            
            medicamentos[i].insumo.quantidade -= qtd;

            int indice;
            for(indice = 0; indice < medicamentosUF.size(); indice++) {
                if(medicamentosUF[indice].insumo.nome.find(medicamentos[i].insumo.nome) != string::npos) {
                    medicamentoExisteUF = true;
                    break;
                }
            }

            if(medicamentoExisteUF) {
                medicamentosUF[indice].insumo.quantidade += qtd;
            } else {
                medicamentosUF.push_back(medicamentos[i]);
                medicamentosUF[medicamentosUF.size()-1].insumo.quantidade = qtd;
            }

            cout << "Estoque de medicamentos atualizado com sucesso!" << endl;

        } else {
            cout << "Quantidade de medicamentos insuficiente" << endl;
        }

    } else {
        cout << "O medicamento solicitado não existe em estoque" << endl;
    }

}


void distribuirEpi(vector<tEpi> &epis, vector<tEpi> &episUF) {

}

void printOpcoesInsumos() {
    int a;
    cout << "1 - Vacina" << endl;
    cout << "2 - Medicamento" << endl;
    cout << "3 - EPI" << endl;
    cout << "4 - Cancelar" << endl;
}

void cadastrarVacina(vector<tVacina> &vacinas) {

    int qtd, indice;
    cout << "Digite quantos tipos de vacina deseja-se cadastrar: ";
    cin >> qtd;
    getchar();
    for(int i = 0; i < qtd; i++) {

        bool vacinaExiste = false;
        tVacina vacina;
        cout << "Informe o nome da vacina: ";
        getline(cin, vacina.insumo.nome);

        for(indice = 0; indice < vacinas.size() ; indice++) {
            
            if(vacinas[i].insumo.nome.find(vacina.insumo.nome) != string::npos) {
                vacinaExiste = true;
                break;
            }
        }

        if(!vacinaExiste) {

            cout << "Informe o preço da unidade: ";
            cin >> vacina.insumo.valorUnitario;
            getchar();
            cout << "Informe a quantidade de unidades da vacina a se cadastrar: ";
            cin >> vacina.insumo.quantidade;
            getchar();
            cout << "Informe o fabricante: ";
            getline(cin, vacina.insumo.fabricante);

            cout << "Informe o tipo de tecnologia: ";
            getline(cin, vacina.tecnologia);
            cout << "Informe a quantidade de doses necessárias: ";
            cin >> vacina.dosesNecessarias;
            getchar();
            if(vacina.dosesNecessarias > 1) {
                cout << "Informe o intervalo de dias entre as doses: ";
                cin >> vacina.intervaloDeDias;
                getchar();
            } else {
                vacina.intervaloDeDias = 0;
            }
            vacinas.push_back(vacina);
        } else {

            cout << "A vacina já existe no estoque. Deseja adicionar mais unidades?[y/N]" << endl;

            char opcao;
            opcao = getchar();
            
            if(tolower(opcao) == 'y') {
                cout << "Informe a quantidade de unidades da vacina a se adicionar: ";
                int qtd;
                cin >> qtd;
                getchar();
                vacinas[indice].insumo.quantidade += qtd;
            }
        }       
    }
}

void cadastrarMedicamento(vector<tMedicamento> &medicamentos) {
    
    int qtd;
    cout << "Digite quantos tipos de medicamentos deseja-se cadastrar" << endl;
    cin >> qtd;
    getchar();
    
    for(int i = 0; i < qtd; i++) {
        
        int indice;
        bool medicamentoExiste = false;
        tMedicamento medicamento;
        cout << "Informe o nome do medicamento: ";
        getline(cin, medicamento.insumo.nome);

        for(indice = 0; indice < medicamentos.size(); indice++) {
            medicamentoExiste = insumoExiste(medicamentos[indice].insumo, medicamento.insumo);
            break;
        }

        if(!medicamentoExiste) {
            cout << "Informe o preço da unidade: ";
            cin >> medicamento.insumo.valorUnitario;
            getchar();
            cout << "Informe a quantidade de unidades do medicamento a se cadastrar: ";
            cin >> medicamento.insumo.quantidade;
            getchar();
            cout << "Informe o fabricante: ";
            cin >> medicamento.insumo.fabricante;
            getchar();

            cout << "Informe a dosagem: ";
            cin >> medicamento.dosagem;
            getchar();
            cout << "Informe a via de administração: ";
            // as vias de administração são limitadas, ajeite isso
            getline(cin, medicamento.viaDeAdministracao);
            cout << "Informe a forma de disponibilização: ";
            // as vias de administração são limitadas, ajeite isso
            getline(cin, medicamento.formaDeDisponibilizacao);
            medicamentos.push_back(medicamento);
        } else {

            cout << "O medicamento já existe no estoque. Deseja adicionar mais unidades?[y/N]" << endl;

            char opcao;
            opcao = getchar();
            
            if(tolower(opcao) == 'y') {
                getchar();
                cout << "Informe a quantidade de unidades a se adicionar: ";
                int qtd;
                cin >> qtd;
                getchar();
                medicamentos[indice].insumo.quantidade += qtd;
            } else if(tolower(opcao) == 'n') {
                getchar();
            }
        }
    }
}

void cadastrarEpi(vector<tEpi> &epis) {

    int qtd;
    cout << "Digite quantos tipos de EPIs deseja-se cadastrar" << endl;
    cin >> qtd;
    getchar();
    
    for(int i = 0; i < qtd; i++) {
        
        tEpi epi;
        cout << "Informe o nome do medicamento: ";
        getline(cin, epi.insumo.nome);
        // verificar se o medicamento já está cadastrada
        cout << "Informe o preço da unidade: ";
        cin >> epi.insumo.valorUnitario;
        getchar();
        cout << "Informe a quantidade de unidades da vacina a se cadastrar: ";
        cin >> epi.insumo.quantidade;
        getchar();
        cout << "Informe o fabricante: ";
        getline(cin, epi.insumo.fabricante);

        epis.push_back(epi);
    }
}

void consultarEstoque(tEstoqueMinisterio estoque) {

    for(tVacina vacina : estoque.vacina) {

        if(vacina.insumo.quantidade > 0) {

            cout << "Vacina: " << vacina.insumo.nome << endl;
            cout << "Quantidade: " << vacina.insumo.quantidade << endl;
            
        }
    }

    cout << endl;

    for(tMedicamento medicamento : estoque.medicamento) {
        
        if(medicamento.insumo.quantidade > 0) {

            cout << "Medicamento: " << medicamento.insumo.nome << endl;
            cout << "Quantidade: " << medicamento.insumo.quantidade << endl;

        }
    }

    cout << endl;

    for(tEpi epi : estoque.epi) {
        
        if(epi.insumo.quantidade > 0) {

            cout << "Epi: " << epi.insumo.nome << endl;
            cout << "Quantidade: " << epi.insumo.quantidade << endl;

        }
    }

    cout << endl;
}

void consultarDescricaoInsumos(tEstoqueMinisterio estoque) {

    for(tVacina vacina : estoque.vacina) {
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
    

    for(tMedicamento medicamento : estoque.medicamento) {
        
        cout << "Nome: " << medicamento.insumo.nome << endl;
        printf("Preço unitário: R$ %lf", medicamento.insumo.valorUnitario);
        cout << "Vencimento: " << medicamento.insumo.vencimento << endl;
        cout << "Fabricante: " << medicamento.insumo.fabricante << endl;
        
        cout << "Dosagem: " << medicamento.dosagem << "mg" << endl;
        cout << "Via de administração: " << medicamento.viaDeAdministracao << endl;
        cout << "Forma de disponibilização" << medicamento.formaDeDisponibilizacao << endl;
    }
    
    cout << endl;

    for(tEpi epi : estoque.epi) {
        
        cout << "Nome: " << epi.insumo.nome << endl;
        printf("Preço unitário: R$ %lf", epi.insumo.valorUnitario);
        cout << "Vencimento: " << epi.insumo.vencimento << endl;
        cout << "Fabricante: " << epi.insumo.fabricante << endl;
        
        cout << "Tipo: " << epi.tipo << endl;
    }

    cout << endl;
}

void inicializarEstados(vector<tEstoqueEstados> &estados) {

    string uf[QTD_ESTADOS] = {"AC", "AL", "AP", "AM", "BA",
                              "CE", "DF", "ES", "GO", "MA",
                              "MT", "MS", "MG", "PA", "PB",
                              "PR", "PE", "PI", "RJ", "RN",
                              "RS", "RO", "RR", "SC", "SP",
                              "SE", "TO"};
    
    for(int i = 0; i < QTD_ESTADOS; i++) {
        estados[i].sigla = uf[i];
    }
}