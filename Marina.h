#pragma once
#include "Seres.h"
#include "Fruta.h"

class Marina : public Seres{
	
	protected:
		string fecha;
		string rango;

	public:
		Marina(string, string, string,int,string,bool,bool,bool);
		Marina(string, string, string,int,string,bool,bool,bool,Fruta*);
		string getFecha();
		string getRango();
};