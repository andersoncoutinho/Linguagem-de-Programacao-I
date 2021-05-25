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
    int qtd = 10000;
    int valor = 2.75;
    string data = "22/10/2021";
    string fabricante = "China";
    
    int tipo = VACINA;
    string tecnologia = "alguma";
    int qtdDoses = 2;
    int intervalo = 15;

    Insumo *teste = new Vacina(nome, qtd, valor, data, fabricante, tipo, tecnologia, qtdDoses, intervalo);


    Controler controle;

    controle.cadastrarInsumosMS(teste);
    cout << controle.getLocal(0).getInsumos().size() << endl;

    return 0;
}