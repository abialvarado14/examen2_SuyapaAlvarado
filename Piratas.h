#include "Seres.h"
#pragma once

class Piratas : public Seres{

	protected:
		string oceano;
		string tripulacion;
		string funcion;
	public:
		Piratas(string,int,string,bool,bool,bool,string, string, string);
		string getOceano();
		string getTripulacion();
		string getFuncion();

};