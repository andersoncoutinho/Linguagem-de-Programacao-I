#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define QTD_ESTADOS 27

#include <string>
#include <vector>

typedef struct {
    std::string nome;
    double valorUnitario;
    int quantidade;
    std::string vencimento;
    std::string fabricante;
}tDadosInsumos;

typedef struct {
    tDadosInsumos insumo;
    std::string tecnologia;
    int dosesNecessarias;
    int intervaloDeDias;
}tVacina;

typedef struct {
    tDadosInsumos insumo;
    std::string dosagem;
    std::string viaDeAdministracao;
    std::string formaDeDisponibilizacao;
}tMedicamento;

//Adicionar outros atributos
typedef struct {
    tDadosInsumos insumo;
    std::string tipo;
}tEpi;

typedef struct {
    std::string sigla;
    std::vector<tVacina> vacina;
    std::vector<tMedicamento> medicamento;
    std::vector<tEpi> epi;
} tEstoqueEstados;

typedef struct {
    std::vector<tVacina> vacina;
    std::vector<tMedicamento> medicamento;
    std::vector<tEpi> epi;
} tEstoqueMinisterio;

void cadastrarInsumo(tEstoqueMinisterio &);
void consultarEstoque(tEstoqueMinisterio);
void consultarDescricaoInsumos(tEstoqueMinisterio);
void consultarInsumosDistribuidos(std::vector<tEstoqueEstados>);
void distribuirInsumo(tEstoqueMinisterio &, std::vector<tEstoqueEstados> &);
void cadastrarVacina(std::vector<tVacina> &);
void cadastrarMedicamento(std::vector<tMedicamento> &);
void cadastrarEpi(std::vector<tEpi> &);
void distribuirVacina(std::vector<tVacina> &, std::vector<tVacina> &);
void distribuirMedicamento(std::vector<tMedicamento> &, std::vector<tMedicamento> &);
void distribuirEpi(std::vector<tEpi> &, std::vector<tEpi> &);
void inicializarEstados(std::vector<tEstoqueEstados> &);
void salvar(tEstoqueMinisterio, std::vector<tEstoqueEstados>);
void carregarDados(tEstoqueMinisterio &, std::vector<tEstoqueEstados> &);
void consultarVacinas(std::vector<tVacina>);
void consultarMedicamentos(std::vector<tMedicamento>);
void consultarEpis(std::vector<tEpi>);
void consultarDescricaoInsumosUF(std::vector<tEstoqueEstados>);
int encontrarEstado(std::string);
void printInsumosDistribuidos(int, int, int);
void printOpcoesGerais();
void printOpcoesInsumos();
int lerOpcao();
void esperar();
void limparTerminal();

#endif

