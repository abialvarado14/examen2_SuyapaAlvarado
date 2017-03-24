#pragma once
#include "Seres.h"

class Marina : public Seres{
	
	protected:
		string fecha;
		string rango;

	public:
		Marina(string, string, string,int,string,bool,bool,bool);
		string getFecha();
		string getRango();
};