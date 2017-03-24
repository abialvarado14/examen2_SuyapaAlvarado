#pragma once
#include "Fruta.h"

class Zoan : public Fruta{
	protected:
		string tipo;
		string animal;
	
	public:
		Zoan(string, string, string);
		string getTipo();
		string getAnimal();
};