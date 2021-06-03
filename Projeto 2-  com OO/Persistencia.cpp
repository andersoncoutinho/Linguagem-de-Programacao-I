#include "Persistencia.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"



bool Persistencia::lerInsumos(Controler *controle) {

    std::ifstream file;
    std::string linha, dado;

    file.open("ArquivosInsumos.txt");

    if (file.is_open()){

        for(int i = 0; i < QTD_ESTADOS; i++) {

            getline(file, linha);

            while(true) {

                getline(file, linha);

                if(linha == "FIM") {
                    break;
                }

                std::vector<std::string> valores;
                for(int j = 0; j < linha.size(); j++) {

                    if(linha[j] == ',') {
                        valores.push_back(dado);
                        dado.clear();
                        continue;
                    }
                    dado.push_back(linha[j]);
                }

                std::string nome = valores[0];
                int quantidade = stoi(valores[1]);
                int valor = stoi(valores[2]);
                std::string vencimento = valores[3];
                std::string fabricante = valores[4];
                int tipoInsumo = stoi(valores[5]);


                if(tipoInsumo == VACINA) {
                    std::string tecnologia = valores[6];
                    int doses = stoi(valores[7]);
                    int intervalo = stoi(valores[8]);
                    controle->cadastrarInsumosMS(new Vacina(nome, quantidade, valor, vencimento, fabricante, tecnologia, doses, intervalo), i);
                } else if(tipoInsumo == MEDICAMENTO) {
                    std::string dosagem = valores[6];
                    std::string administracao = valores[7];
                    std::string disponibilizacao = valores[8];
                    controle->cadastrarInsumosMS(new Medicamento(nome, quantidade, valor, vencimento, fabricante, dosagem, administracao, disponibilizacao),i);
                } else if(tipoInsumo == EPI) {
                    std::string tipo = valores[6];
                    std::string descricao = valores[7];
                    controle->cadastrarInsumosMS(new Epi(nome, quantidade, valor, vencimento, fabricante, tipo, descricao), i);
                }
            }
        }

        file.close();

        return true;
    }

    return false;
}

bool Persistencia::salvarInsumos(Controler controle) {

    std::ofstream file;


    file.open("ArquivosInsumos.txt");

    if (file.is_open()){

        for (int i = 0; i < QTD_ESTADOS; i++) {
            file << controle.getNomeLocal(i) << std::endl;

            for (int j = 0; j < controle.getLocal(i).getInsumos()->size(); j++) {

               file << controle.getLocal(i).getInsumo(j)->getInfoArquivo() << std::endl;
            }

            file << "FIM" << std::endl;
        }

        file.close();
        
        return 1;
    }

        return 0;

}

