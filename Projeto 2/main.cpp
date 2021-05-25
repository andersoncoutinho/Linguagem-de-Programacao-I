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
    int qtd = 10000;
    int valor = 2.75;
    string data = "22/10/2021";
    string fabricante = "China";
    
    int tipo1 = VACINA;
    int tipo2 = MEDICAMENTO;
    string dosagem = "alguma";
    string admnistracao = "hi";
    string disponib = "hello";
    string tecnologia = "mRNA";
    int doses = 2;
    int intervalo = 15;

    Insumo *teste = new Vacina(nome, qtd, valor, data, fabricante, tipo1, tecnologia, doses, intervalo);
    Insumo *teste2 = new Medicamento(nome2, qtd, valor, data, fabricante, tipo2, dosagem, admnistracao, disponib);



    Controler controle;
    

    vector<Insumo*> vetorTeste;

    controle.cadastrarInsumosMS(teste);
    controle.cadastrarInsumosMS(teste2);
    
    cout << controle.consultarInsumos(0) << endl;

    return 0;
}