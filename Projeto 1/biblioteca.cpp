#include <iostream>
#include <fstream>
#include <stdio.h>
#include "biblioteca.h"

using namespace std;

string uf[QTD_ESTADOS] = {"AC", "AL", "AP", "AM", "BA",
                          "CE", "DF", "ES", "GO", "MA",
                          "MT", "MS", "MG", "PA", "PB",
                          "PR", "PE", "PI", "RJ", "RN",
                          "RS", "RO", "RR", "SC", "SP",
                          "SE", "TO"};

void cadastrarInsumo(tEstoqueMinisterio &estoque) {
    limparTerminal();
    cout << "CADASTRO DE INSUMOS" << endl << endl
        << "Que tipo de insumo deseja-se cadastrar?" << endl;
    printOpcoesInsumos();
    int opcao = lerOpcao();
    limparTerminal();
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
            esperar();
        } else {

            cout << "A vacina já existe no estoque. Deseja adicionar mais unidades? [y/N] ";
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
        cout << "Informe o nome do medicamento " << i+1 << ": ";
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
            getline(cin, medicamento.insumo.fabricante);
            cout << "Informe a data de vencimento: ";
            getline(cin, medicamento.insumo.vencimento);

            cout << "Informe a dosagem: ";
            getline(cin, medicamento.dosagem);
            cout << "Informe a via de administração: ";
            getline(cin, medicamento.viaDeAdministracao);
            cout << "Informe a forma de disponibilização: ";
            getline(cin, medicamento.formaDeDisponibilizacao);

            medicamentos.push_back(medicamento);
            cout << endl << "Medicamento " << i+1 << " cadastrado com sucesso!" << endl << endl;
            esperar();
        } else {

            cout << "O medicamento já existe no estoque. Deseja adicionar mais unidades? [y/N] ";

            char opcao;
            opcao = getchar();
            
            if(tolower(opcao) == 'y') {
                getchar();
                cout << "Informe a quantidade de unidades a se adicionar: ";
                int qtd;
                cin >> qtd;
                getchar();
                medicamentos[indice].insumo.quantidade += qtd;
                cout << endl << "Quantidade atualizada com sucesso!" << endl << endl;
                esperar();
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
        
        int indice;
        bool epiExiste = false;
        tEpi epi;
        cout << "Informe o nome do EPI " << i+1 << ": ";
        getline(cin, epi.insumo.nome);

        for(indice = 0; indice < epis.size(); indice++) {
            if(epis[indice].insumo.nome.find(epi.insumo.nome) != string::npos) {
                epiExiste = true;
                break;
            }
        }

        if(!epiExiste) {
            cout << "Informe o preço da unidade: ";
            cin >> epi.insumo.valorUnitario;
            getchar();
            cout << "Informe a quantidade de unidades do EPI a se cadastrar: ";
            cin >> epi.insumo.quantidade;
            getchar();
            cout << "Informe o fabricante: ";
            getline(cin, epi.insumo.fabricante);
            cout << "Informe a data de vencimento: ";
            getline(cin, epi.insumo.vencimento);

            cout << "Informe o tipo: ";
            getline(cin, epi.tipo);
            cout << "Informe a descrição: ";
            getline(cin, epi.descricao);
            
            epis.push_back(epi);
            cout << endl << "EPI " << i+1 << " cadastrado com sucesso!" << endl << endl;
            esperar();
        } else {

            cout << "O EPI já existe no estoque. Deseja adicionar mais unidades? [y/N] ";
            char opcao;
            opcao = getchar();
            
            if(tolower(opcao) == 'y') {
                getchar();
                cout << "Informe a quantidade de unidades a se adicionar: ";
                int qtd;
                cin >> qtd;
                getchar();
                epis[indice].insumo.quantidade += qtd;
                cout << endl << "Quantidade atualizada com sucesso!" << endl << endl;
                esperar();
            } else if(tolower(opcao) == 'n') {
                getchar();
            }
        }
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
    limparTerminal();
    printInsumosDistribuidos(qtdVacina, qtdMedicamento, qtdEpi);
    esperar();
}

void printInsumosDistribuidos(int qtdVacina, int qtdMedicamento, int qtdEpi) {
    cout << endl << "INSUMOS DISTRIBUÍDOS" << endl << endl
        << "Quantidade de vacinas distribuídas: " << qtdVacina << endl
        << "Quantidade de medicamentos distribuídos: " << qtdMedicamento << endl
        << "Quantidade de EPIs distribuídos: " << qtdEpi << endl
        << endl;
}

void distribuirInsumo(tEstoqueMinisterio &estoque, vector<tEstoqueEstados> &estados) {
    
    string sigla;
    int indice;
    cout << "Digite a sigla do estado para o qual se deseja distribuir o insumo: ";
    getline(cin, sigla);

    indice = encontrarEstado(sigla);

    if(indice != -1) {
        cout << "Que tipo de insumo deseja-se distribuir?" << endl;
            printOpcoesInsumos();
            int opcao = lerOpcao();;
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
    } else {
        cout << "Estado não encontrado" << endl;
        esperar();
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

    esperar();
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

void consultarEstoque(tEstoqueMinisterio estoque) {

    limparTerminal();
    cout << endl << "ESTOQUE DE INSUMOS DO MINISTÉRIO DA SAÚDE" << endl;

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
    
    limparTerminal();
    cout << endl << "Que tipo de insumo deseja-se consultar?" << endl;
    printOpcoesInsumos();
    int opcao = lerOpcao();

    switch (opcao) {
        case 1:
            cout << endl << "VACINAS NO ESTOQUE" << endl << endl;
            consultarVacinas(estoque.vacina);
            break;
        case 2:
            cout << endl << "MEDICAMENTOS NO ESTOQUE" << endl << endl;
            consultarMedicamentos(estoque.medicamento);
            break;
        case 3:
            cout << endl << "EPIS NO ESTOQUE" << endl << endl;
            consultarEpis(estoque.epi);
            break;
        case 4: 
            return;
        default:
            cout << "Opção Inválida" << endl;
            break;
    }
    esperar();
}

void consultarVacinas(vector<tVacina> vacinas) {
    for(tVacina vacina : vacinas) {
        cout << "Nome: " << vacina.insumo.nome << endl;
        printf("Preço unitário: R$ %.2lf\n", vacina.insumo.valorUnitario);
        cout << "Vencimento: " << vacina.insumo.vencimento << endl;
        cout << "Quantidade: " << vacina.insumo.quantidade << endl;
        cout << "Fabricante: " << vacina.insumo.fabricante << endl;

        cout << "Tecnologia: "  << vacina.tecnologia << endl;
        cout << "Doses Necessárias: " << vacina.dosesNecessarias << endl;
        if(vacina.dosesNecessarias > 1) {
            cout << "Intervalo de dias entre as doses: " << vacina.intervaloDeDias << endl;
        }
        cout << endl;
    }
    cout << endl;
}

void consultarMedicamentos(vector<tMedicamento> medicamentos) {

    for(tMedicamento medicamento : medicamentos) {  
        cout << "Nome: " << medicamento.insumo.nome << endl;
        printf("Preço unitário: R$ %.2lf\n", medicamento.insumo.valorUnitario);
        cout << "Vencimento: " << medicamento.insumo.vencimento << endl;
        cout << "Fabricante: " << medicamento.insumo.fabricante << endl;
        cout << "Quantidade: " << medicamento.insumo.quantidade << endl;
        cout << "Dosagem: " << medicamento.dosagem << endl;
        cout << "Via de administração: " << medicamento.viaDeAdministracao << endl;
        cout << "Forma de disponibilização: " << medicamento.formaDeDisponibilizacao << endl;
        cout << endl;
    } 
    cout << endl;
}

void consultarEpis(vector<tEpi> epis) {
    for(tEpi epi : epis) {
        cout << "Nome: " << epi.insumo.nome << endl;
        printf("Preço unitário: R$ %.2lf\n", epi.insumo.valorUnitario);
        cout << "Vencimento: " << epi.insumo.vencimento << endl;
        cout << "Fabricante: " << epi.insumo.fabricante << endl;
        cout << "Quantidade: " << epi.insumo.quantidade << endl;
        cout << "Tipo: " << epi.tipo << endl;
        cout << "Descrição: " << epi.descricao << endl;
        cout << endl;
    }
    cout << endl;
}

void consultarDescricaoInsumosPorUF(vector<tEstoqueEstados> estados) {
    limparTerminal();
    string estado;
    cout << "Digite a sigla do estado: ";
    getline(cin, estado);
    
    int indiceEstado = encontrarEstado(estado);

    if(indiceEstado != -1) {
        cout << endl << "Que tipo de insumo você deseja consultar?" << endl;
        printOpcoesInsumos();
        int opcao = lerOpcao();
        limparTerminal();
        switch (opcao) {
            case 1:
                cout << "Vacinas enviadas para " << estado << endl << endl;;
                consultarVacinas(estados[indiceEstado].vacina);
                break;
            case 2:
                cout << "Medicamentos enviados para " << estado << endl << endl;
                consultarMedicamentos(estados[indiceEstado].medicamento);
                break;
            case 3:
                cout << "EPIs enviados para " << estado << endl << endl;
                consultarEpis(estados[indiceEstado].epi);
                break;
            case 4: 
                return;
            default:
                cout << "Opção Inválida" << endl;
                break;
        }
    } else {
        cout << "Estado não encontrado" << endl;
    }
    esperar();
}

void consultarDescricaoInsumosUF(vector<tEstoqueEstados> estados) {

    for(int i = 0; i < QTD_ESTADOS; i++) {
        limparTerminal();

        cout << "INSUMOS DISTRIBUÍDOS PARA " << uf[i] << endl << endl;

        cout << "VACINAS" << endl << endl;
        consultarVacinas(estados[i].vacina);

        cout << "MEDICAMENTOS" << endl << endl;
        consultarMedicamentos(estados[i].medicamento);

        cout << "EPIS" << endl << endl;
        consultarEpis(estados[i].epi);

        esperar();
    }
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
            << epi.tipo << ","
            << epi.descricao << endl;
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
                << estados[i].epi[j].tipo << ","
                << estados[i].epi[j].descricao;

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
                            break;
                        case 4:
                            medicamento.insumo.vencimento = dado;
                            break;
                        case 5:
                            medicamento.insumo.fabricante = dado;
                            break;
                        case 6:
                            medicamento.dosagem = dado;
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
                            break;
                        case 4:
                            epi.insumo.vencimento = dado;
                            break;
                        case 5:
                            epi.insumo.fabricante = dado;
                            break;
                        case 6:
                            epi.tipo = dado;
                            break;
                        case 7:
                            epi.descricao = dado;
                            break;
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
                            break;
                        case 4:
                            medicamento.insumo.vencimento = dado;
                            break;
                        case 5:
                            medicamento.insumo.fabricante = dado;
                            break;
                        case 6:
                            medicamento.dosagem = dado;
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
                            break;
                        case 7:
                            epi.descricao = dado;
                            posicao = 0;
                            estados[estado].epi.push_back(epi);
                            break;
                    }
                    dado = "";
                }
            }
        }
    }
    arquivo.close();
}

int encontrarEstado(string estado) {
    for(int i = 0; i < QTD_ESTADOS; i++) {
        if(uf[i] == estado) {
            return i;
        }
    }
    return -1;
}

void limparTerminal() {
    system("clear");
}

void esperar() {
    cout << "Pressione ENTER para continuar...";
    while(getchar() != '\n');
}

void printOpcoesGerais(){
    cout << "Menu de Opções" << endl << endl
        << "1 - Cadastrar Insumo" << endl
        << "2 - Consultar Estoque de Insumos" << endl
        << "3 - Distribuir Insumos" << endl
        << "4 - Consultar Insumos Distribuídos" << endl
        << "5 - Consultar Descrição dos Insumos no Estoque" << endl
        << "6 - Consultar Descrição dos Insumos Distribuídos" << endl
        << "7 - Consultar Descrição dos Insumos Distribuídos Para um Estado" << endl
        << "8 - Sair" << endl << endl;
}

void printOpcoesInsumos() {
    cout << "1 - Vacina" << endl
        << "2 - Medicamento" << endl
        << "3 - EPI" << endl
        << "4 - Cancelar" << endl
        << endl;
}

int lerOpcao() {
    int opcao;
    cout << "Escolha uma opção: ";
    cin >> opcao;
    getchar();
    return opcao;
}
