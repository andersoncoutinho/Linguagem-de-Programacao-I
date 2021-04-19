#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "myLibrary.h"

#define QTD_ESTADOS 27
string uf[QTD_ESTADOS] = {"AC", "AL", "AP", "AM", "BA",
                              "CE", "DF", "ES", "GO", "MA",
                              "MT", "MS", "MG", "PA", "PB",
                              "PR", "PE", "PI", "RJ", "RN",
                              "RS", "RO", "RR", "SC", "SP",
                              "SE", "TO"};
    
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

void printOpcoesInsumos() {
    int a;
    cout << "1 - Vacina" << endl;
    cout << "2 - Medicamento" << endl;
    cout << "3 - EPI" << endl;
    cout << "4 - Cancelar" << endl;
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
    
    cout << "Digite o nome da vacina que deseja-se distribuir: ";
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

    cout << "Digite o nome do medicamento que deseja-se distribuir: ";
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
        cout << "Digite a quantidade de medicamentos que deseja-se enviar: ";
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

    cout << "Digite o nome do EPI que deseja-se distribuir: ";
    string nome;
    bool epiExiste = false;
    getline(cin, nome);

    int i;
    for(i = 0; i < epis.size(); i++) {
        if(epis[i].insumo.nome.find(nome) != string::npos) {
            epiExiste = true;
            break;
        }
    }

    if(epiExiste) {
        int qtd;
        bool epiExisteUF = false;
        cout << "Digite a quantidade de EPIs que deseja-se enviar: ";
        cin >> qtd;
        getchar();

        if(epis[i].insumo.quantidade >= qtd) {
            
            epis[i].insumo.quantidade -= qtd;

            int indice;
            for(indice = 0; indice < episUF.size(); indice++) {
                if(episUF[indice].insumo.nome.find(epis[i].insumo.nome) != string::npos) {
                    epiExisteUF = true;
                    break;
                }
            }

            if(epiExisteUF) {
                episUF[indice].insumo.quantidade += qtd;
            } else {
                episUF.push_back(epis[i]);
                episUF[episUF.size()-1].insumo.quantidade = qtd;
            }

            cout << "Estoque de EPIs atualizado com sucesso!" << endl;

        } else {
            cout << "Quantidade de EPIs insuficiente" << endl;
        }

    } else {
        cout << "O EPI solicitado não existe em estoque" << endl;
    }
}

void cadastrarVacina(vector<tVacina> &vacinas) {

    int qtd, indice;
    cout << "Digite quantos tipos de vacina deseja-se cadastrar: ";
    cin >> qtd;
    getchar();
    for(int i = 0; i < qtd; i++) {

        bool vacinaExiste = false;
        tVacina vacina;
        cout << "Informe o nome da vacina " << i+1 << ": ";
        getline(cin, vacina.insumo.nome);

        for(indice = 0; indice < vacinas.size() ; indice++) {
            
            if(vacinas[indice].insumo.nome.find(vacina.insumo.nome) != string::npos) {
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
            cout << "Informe a data de vencimento: ";
            getline(cin, vacina.insumo.vencimento);
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
            cout << endl << "Vacina " << i+1 << " cadastrada com sucesso!" << endl << endl;
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
                cout << endl << "Quantidade atualizada com sucesso!" << endl << endl;
                esperar();
            }
        }       
    }
}

void cadastrarMedicamento(vector<tMedicamento> &medicamentos) {
    
    int qtd;
    cout << "Digite quantos tipos de medicamentos deseja-se cadastrar: ";
    cin >> qtd;
    getchar();
    
    for(int i = 0; i < qtd; i++) {
        
        int indice;
        bool medicamentoExiste = false;
        tMedicamento medicamento;
        cout << "Informe o nome do medicamento: ";
        getline(cin, medicamento.insumo.nome);

        for(indice = 0; indice < medicamentos.size(); indice++) {
            if(medicamentos[indice].insumo.nome.find(medicamento.insumo.nome) != string::npos) {
                medicamentoExiste = true;
                break;
            }
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
            cout << "Informe a data de vencimento: ";
            getline(cin, medicamento.insumo.vencimento);

            cout << "Informe a dosagem: ";
            cin >> medicamento.dosagem;
            getchar();
            cout << "Informe a via de administração: ";
            getline(cin, medicamento.viaDeAdministracao);
            cout << "Informe a forma de disponibilização: ";
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
    cout << "Digite quantos tipos de EPIs deseja-se cadastrar: ";
    cin >> qtd;
    getchar();
    
    for(int i = 0; i < qtd; i++) {
        
        tEpi epi;
        cout << "Informe o nome do EPI: ";
        getline(cin, epi.insumo.nome);
        cout << "Informe o preço da unidade: ";
        cin >> epi.insumo.valorUnitario;
        getchar();
        cout << "Informe a quantidade de unidades do EPI a se cadastrar: ";
        cin >> epi.insumo.quantidade;
        getchar();
        cout << "Informe o fabricante: ";
        getline(cin, epi.insumo.fabricante);

        epis.push_back(epi);
    }
}

void consultarEstoque(tEstoqueMinisterio estoque) {

    cout << endl << "VACINAS" << endl << endl;
    for(tVacina vacina : estoque.vacina) {
        if(vacina.insumo.quantidade > 0) {
            cout << "Vacina: " << vacina.insumo.nome << endl;
            cout << "Quantidade: " << vacina.insumo.quantidade << endl;
        }
    }
    cout << endl;

    cout << "MEDICAMENTOS" << endl << endl;
    for(tMedicamento medicamento : estoque.medicamento) {   
        if(medicamento.insumo.quantidade > 0) {
            cout << "Medicamento: " << medicamento.insumo.nome << endl;
            cout << "Quantidade: " << medicamento.insumo.quantidade << endl;
        }
    }
    cout << endl;

    cout << "EPIs" << endl << endl;
    for(tEpi epi : estoque.epi) {   
        if(epi.insumo.quantidade > 0) {
            cout << "Epi: " << epi.insumo.nome << endl;
            cout << "Quantidade: " << epi.insumo.quantidade << endl;
        }
    }
    cout << endl;

    esperar();
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

    for(int i = 0; i < QTD_ESTADOS; i++) {
        estados[i].sigla = uf[i];
    }
}

void salvar(tEstoqueMinisterio estoque, vector<tEstoqueEstados> estados) {
    
    ofstream arquivo;    

    arquivo.open("estoqueVacinas.csv");
    for(tVacina vacina : estoque.vacina) {
        arquivo << vacina.insumo.nome << ","
            << vacina.insumo.valorUnitario << ","
            << vacina.insumo.quantidade << ","
            << vacina.insumo.vencimento << ","
            << vacina.insumo.fabricante << ","
            << vacina.tecnologia << ","
            << vacina.dosesNecessarias << ","
            << vacina.intervaloDeDias << endl;
    }
    arquivo.close();

    arquivo.open("estoqueMedicamentos.csv");
    for(tMedicamento medicamento : estoque.medicamento) {
        arquivo << medicamento.insumo.nome << ","
            << medicamento.insumo.valorUnitario << ","
            << medicamento.insumo.quantidade << ","
            << medicamento.insumo.vencimento << ","
            << medicamento.insumo.fabricante << ","
            << medicamento.dosagem << ","
            << medicamento.viaDeAdministracao << ","
            << medicamento.formaDeDisponibilizacao << endl;

    }
    arquivo.close();

    arquivo.open("estoqueEpis.csv");
    for(tEpi epi : estoque.epi) {
        arquivo << epi.insumo.nome << ","
            << epi.insumo.valorUnitario << ","
            << epi.insumo.quantidade << ","
            << epi.insumo.vencimento << ","
            << epi.insumo.fabricante << ","
            << epi.tipo << endl;
    }
    arquivo.close();

    arquivo.open("estoqueVacinaUF.csv");
    for(int i = 0; i < QTD_ESTADOS; i++) {
        int j;
        for(j = 0; j < estados[i].vacina.size(); j++) {
            arquivo << estados[i].vacina[j].insumo.nome << ","
                << estados[i].vacina[j].insumo.valorUnitario << ","
                << estados[i].vacina[j].insumo.quantidade << ","
                << estados[i].vacina[j].insumo.vencimento << ","
                << estados[i].vacina[j].insumo.fabricante << ","
                << estados[i].vacina[j].tecnologia << ","
                << estados[i].vacina[j].dosesNecessarias << ","
                << estados[i].vacina[j].intervaloDeDias;
            if(j < estados[i].vacina.size()-1) {
                arquivo << ",";
            }
        }
        arquivo << "\n";
    }
    arquivo.close();

    arquivo.open("estoqueMedicamentosUF.csv");
    for(int i = 0; i < QTD_ESTADOS; i++) {
        int j;
        for(j = 0; j < estados[i].medicamento.size(); j++) {
            arquivo << estados[i].medicamento[j].insumo.nome << ","
                << estados[i].medicamento[j].insumo.valorUnitario << ","
                << estados[i].medicamento[j].insumo.quantidade << ","
                << estados[i].medicamento[j].insumo.vencimento << ","
                << estados[i].medicamento[j].insumo.fabricante << ","
                << estados[i].medicamento[j].dosagem << ","
                << estados[i].medicamento[j].viaDeAdministracao << ","
                << estados[i].medicamento[j].formaDeDisponibilizacao;
            if(j < estados[i].medicamento.size()-1) {
                arquivo << ",";
            }
        }
        arquivo << "\n";
    }
    arquivo.close();

    arquivo.open("estoqueEpisUF.csv");
    for(int i = 0; i < QTD_ESTADOS; i++) {
        int j;
        for(j = 0; j < estados[i].epi.size(); j++) {
            arquivo << estados[i].epi[j].insumo.nome << ","
                << estados[i].epi[j].insumo.valorUnitario << ","
                << estados[i].epi[j].insumo.quantidade << ","
                << estados[i].epi[j].insumo.vencimento << ","
                << estados[i].epi[j].insumo.fabricante << ","
                << estados[i].epi[j].tipo;

            if(j < estados[i].medicamento.size()-1) {
                arquivo << ",";
            }
        }
        arquivo << "\n";
    }
}

void carregarDados(tEstoqueMinisterio &estoque, vector<tEstoqueEstados> &estados) {
    
    ifstream arquivo;
    string linha, dado;
    int posicao;
    tVacina vacina;
    tMedicamento medicamento;
    tEpi epi;

    arquivo.open("estoqueVacinas.csv");
    if(arquivo.is_open()) {
        while(getline(arquivo, linha)) {
            posicao = 0;
            for(int i = 0; i <= linha.size(); i++) {
                if(linha[i] != ',' && i < linha.size()) {
                    dado.push_back(linha[i]);
                } else {
                    dado.push_back('\0');
                    posicao++;
                    switch(posicao) {
                        case 1:
                            vacina.insumo.nome = dado;
                            break;
                        case 2:
                            vacina.insumo.valorUnitario = stod(dado);
                            break;
                        case 3:
                            vacina.insumo.quantidade = stoi(dado);
                        case 4:
                            vacina.insumo.vencimento = dado;
                            break;
                        case 5:
                            vacina.insumo.fabricante = dado;
                            break;
                        case 6:
                            vacina.tecnologia = dado;
                            break;
                        case 7:
                            vacina.dosesNecessarias = stoi(dado);
                            break;
                        case 8:
                            vacina.intervaloDeDias = stoi(dado);
                            break;
                    }
                    dado = "";
                }
            }
            estoque.vacina.push_back(vacina);
        }
    }
    arquivo.close();

    arquivo.open("estoqueMedicamentos.csv");
    if(arquivo.is_open()) {
        while(getline(arquivo, linha)) {
            posicao = 0;
            for(int i = 0; i <= linha.size(); i++) {
                if(linha[i] != ',' && i < linha.size()) {
                    dado.push_back(linha[i]);
                } else {
                    dado.push_back('\0');
                    posicao++;
                    switch(posicao) {
                        case 1:
                            medicamento.insumo.nome = dado;
                            break;
                        case 2:
                            medicamento.insumo.valorUnitario = stod(dado);
                            break;
                        case 3:
                            medicamento.insumo.quantidade = stoi(dado);
                        case 4:
                            medicamento.insumo.vencimento = dado;
                            break;
                        case 5:
                            medicamento.insumo.fabricante = dado;
                            break;
                        case 6:
                            medicamento.dosagem = stod(dado);
                            break;
                        case 7:
                            medicamento.viaDeAdministracao = dado;
                            break;
                        case 8:
                            medicamento.formaDeDisponibilizacao = dado;
                            break;
                    }
                    dado = "";
                }
            }
            estoque.medicamento.push_back(medicamento);
        }
    }
    arquivo.close();

    arquivo.open("estoqueEpis.csv");
    if(arquivo.is_open()) {
        while(getline(arquivo, linha)) {
            posicao = 0;
            for(int i = 0; i <= linha.size(); i++) {
                if(linha[i] != ',' && i < linha.size()) {
                    dado.push_back(linha[i]);
                } else {
                    dado.push_back('\0');
                    posicao++;
                    switch(posicao) {
                        case 1:
                            epi.insumo.nome = dado;
                            break;
                        case 2:
                            epi.insumo.valorUnitario = stod(dado);
                            break;
                        case 3:
                            epi.insumo.quantidade = stoi(dado);
                        case 4:
                            epi.insumo.vencimento = dado;
                            break;
                        case 5:
                            epi.insumo.fabricante = dado;
                            break;
                        case 6:
                            epi.tipo = dado;
                    }
                    dado = "";
                }
            }
            estoque.epi.push_back(epi);
        }
    }
    arquivo.close();

    arquivo.open("estoqueVacinaUF.csv");
    if(arquivo.is_open()) {
        for(int estado = 0; getline(arquivo, linha); estado++) {
            posicao = 0;
            for(int i = 0; i <= linha.size(); i++) {
                if(linha[i] != ',' && i < linha.size()) {
                    dado.push_back(linha[i]);
                } else {
                    dado.push_back('\0');
                    posicao++;
                    switch(posicao) {
                        case 1:
                            vacina.insumo.nome = dado;
                            break;
                        case 2:
                            vacina.insumo.valorUnitario = stod(dado);
                            break;
                        case 3:
                            vacina.insumo.quantidade = stoi(dado);
                            break;
                        case 4:
                            vacina.insumo.vencimento = dado;
                            break;
                        case 5:
                            vacina.insumo.fabricante = dado;
                            break;
                        case 6:
                            vacina.tecnologia = dado;
                            break;
                        case 7:
                            vacina.dosesNecessarias = stoi(dado);
                            break;
                        case 8:
                            vacina.intervaloDeDias = stoi(dado);
                            posicao = 0;
                            estados[estado].vacina.push_back(vacina);
                            break;
                    }
                    dado = "";
                }
            }
        }
    }
    arquivo.close();

    arquivo.open("estoqueMedicamentosUF.csv");
    if(arquivo.is_open()) {
        for(int estado = 0; getline(arquivo, linha); estado++) {
            posicao = 0;
            for(int i = 0; i <= linha.size(); i++) {
                if(linha[i] != ',' && i < linha.size()) {
                    dado.push_back(linha[i]);
                } else {
                    dado.push_back('\0');
                    posicao++;
                    switch(posicao) {
                        case 1:
                            medicamento.insumo.nome = dado;
                            break;
                        case 2:
                            medicamento.insumo.valorUnitario = stod(dado);
                            break;
                        case 3:
                            medicamento.insumo.quantidade = stoi(dado);
                        case 4:
                            medicamento.insumo.vencimento = dado;
                            break;
                        case 5:
                            medicamento.insumo.fabricante = dado;
                            break;
                        case 6:
                            medicamento.dosagem = stod(dado);
                            break;
                        case 7:
                            medicamento.viaDeAdministracao = dado;
                            break;
                        case 8:
                            medicamento.formaDeDisponibilizacao = dado;
                            posicao = 0;
                            estados[estado].medicamento.push_back(medicamento);
                            break;
                    }
                    dado = "";
                }
            }
        }
    }
    arquivo.close();

    arquivo.open("estoqueEpisUF.csv");
    if(arquivo.is_open()) {
        for(int estado = 0; getline(arquivo, linha); estado++) {
            posicao = 0;
            for(int i = 0; i <= linha.size(); i++) {
                if(linha[i] != ',' && i < linha.size()) {
                    dado.push_back(linha[i]);
                } else {
                    dado.push_back('\0');
                    posicao++;
                    switch(posicao) {
                        case 1:
                            epi.insumo.nome = dado;
                            break;
                        case 2:
                            epi.insumo.valorUnitario = stod(dado);
                            break;
                        case 3:
                            epi.insumo.quantidade = stoi(dado);
                            break;
                        case 4:
                            epi.insumo.vencimento = dado;
                            break;
                        case 5:
                            epi.insumo.fabricante = dado;
                            break;
                        case 6:
                            epi.tipo = dado;
                            posicao = 0;
                            estados[estado].epi.push_back(epi);
                    }
                    dado = "";
                }
            }
        }
    }
    arquivo.close();
}

void esperar() {
    cout << "Prese ENTER para continuar..." << endl;

    while(getchar() != '\n');
}