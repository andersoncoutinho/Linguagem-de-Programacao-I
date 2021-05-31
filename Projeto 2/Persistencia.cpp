#include "Persistencia.h"  
	
void Persistencia::lerInsumos(Controler *controle) {

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

