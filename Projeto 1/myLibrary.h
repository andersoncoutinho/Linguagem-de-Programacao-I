#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <string>
#include <vector>

using namespace std;

typedef struct {
    string nome;
    double valorUnitario;
    int quantidade;
    string vencimento;
    string fabricante;
    string tecnologia;
    int dosesNecessarias;
    int intervaloDeDias;
}tVacina;

typedef struct {
    string nome;
    double valorUnitario;
    int quantidade;
    string vencimento;
    string fabricante;
    double dosagem;
    string viaDeAdministracao;
    string formaDeDisponibilizacao;
}tMedicamento;

typedef struct {
    string nome;
    double valorUnitario;
    int quantidade;
    string vencimento;
    string fabricante;
}tEpi;

typedef struct {
    string sigla;
    vector<tVacina> vacina;
    vector<tMedicamento> medicamento;
    vector<tEpi> epi;
} tEstoqueEstados;

typedef struct {
    vector<tVacina> vacina;
    vector<tMedicamento> medicamento;
    vector<tEpi> epi;
} tEstoqueMinisterio;

#endif

void cadastrarInsumo();
void consultarEstoque();
void consultarDescricaoInsumo();
void consultarInsumosDistribuidos();
void consultarInsumosDistribuidosComInfo();
void consultarInsumosPorEstado(int);
void distribuirInsumo();
void debitarInsumoEstoque();
void imprimirMenuDeOpcoesGeral();
void lerInteiro(int &);
void limparTerminal();
