#ifndef EPI_H
#define EPI_H

#include "Insumo.h"
#include <string>

class EPI : public Insumo {
	private:
		int tipo;
		std::string descricao;
	public:

		EPI();
		~EPI();
		EPI(int tipo, std::string descricao);
		std::string getDescricao();

};
#endif