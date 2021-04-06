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
}tDadosInsumos;

typedef struct {
    tDadosInsumos insumo;
    string tecnologia;
    int dosesNecessarias;
    int intervaloDeDias;
}tVacina;

typedef struct {
    tDadosInsumos insumo;
    double dosagem;
    string viaDeAdministracao;
    string formaDeDisponibilizacao;
}tMedicamento;

//Adicionar outros atributos
typedef struct {
    tDadosInsumos insumo;
    string tipo;
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

void cadastrarInsumo(tEstoqueMinisterio &);
void consultarEstoque(tEstoqueMinisterio);
void consultarDescricaoInsumos(tEstoqueMinisterio);
void consultarInsumosDistribuidos();
void consultarInsumosDistribuidosComInfo();
void consultarInsumosPorEstado(int);
void distribuirInsumo();
void debitarInsumoEstoque();
void printOpcoesGerais();
void lerInt(int &);
void clear();
void printOpcoesInsumos();
void cadastrarVacina(vector<tVacina> &);
void cadastrarMedicamento(vector<tMedicamento> &);
void cadastrarEpi(vector<tEpi> &);
bool ehDouble(string);
void lerDouble(double &);



#endif

