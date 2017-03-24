#pragma once
#include "Fruta.h"

class Paramecia : public Fruta {
	protected:
		string descripcion;

	public:
		Paramecia(string, string);
		string getDescripcion();
};
