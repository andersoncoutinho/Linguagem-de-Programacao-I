#include "Persistencia.h"  
	
void Persistencia::lerInsumos(Controler *controle) {

    std::ifstream file;
    std::string linha, dado;

    file.open("ArquivosInsumos.txt");
    //carregar dados do arquivo para o objeto controler

    if (file.is_open()){
        while(getline(file, linha)) {
            for(int i = 0; i < linha.size(); i++) {
                if(linha[i] != ',' && i < linha.size()) {
                   dado += linha[i];
                }else{
                   for(int j = 0; j < 28; j++){
                       if(dado == "Ministério da Saúde"){
                           //controle->cadastrarInsumosMS()
                           //Preciso identificar qual o tipo de insumo

                       }else{
                           //controle->distribuirInsumo()
                           //Preciso identificar qual o tipo de insumo

                       }
                   }
                }
            }
        }
    }
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

