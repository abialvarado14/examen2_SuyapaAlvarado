#pragma once
#include "Fruta.h"

class Logia : public Fruta{
	protected:
		string elemento;

	public:
		Logia(string, string);
		string getElemento();

};