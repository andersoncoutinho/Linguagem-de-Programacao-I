#include <iostream>
#include "Insumo.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"
#include "Local.h"
#include "Controler.h"

using namespace std;

int main(void) {

    string nome = "Coronavac";
    string nome2 = "Dipirona";
    string nome3 = "Macara";
    int qtd = 10000;
    int valor = 2.75;
    string data = "22/10/2021";
    string fabricante = "China";
    
    int tipo1 = VACINA;
    int tipo2 = MEDICAMENTO;
    int tipo3 = EPI;
    string dosagem = "alguma";
    string admnistracao = "hi";
    string disponib = "hello";
    string tecnologia = "mRNA";
    string tipoEpi = "tipoEPI";
    string descricao = "descricao";
    int doses = 2;
    int intervalo = 15;

    Insumo *teste = new Vacina(nome, qtd, valor, data, fabricante, tipo1, tecnologia, doses, intervalo);
    Insumo *teste2 = new Medicamento(nome2, qtd, valor, data, fabricante, tipo2, dosagem, admnistracao, disponib);
    Insumo *teste3 = new Epi(nome3, qtd, valor, data, fabricante, tipo3, tipoEpi, descricao);

    Controler controle;
    

    vector<Insumo*> vetorTeste;

    controle.cadastrarInsumosMS(teste);
    controle.cadastrarInsumosMS(teste2);
    controle.cadastrarInsumosMS(teste3);
    
    cout << controle.consultarTipoInsumos(0, 1) << endl;

    return 0;
}