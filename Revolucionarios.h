#pragma once
#include "Seres.h"

class Revolucionarios : public Seres{

	protected:
		string fechaing;
	
	public:
		Revolucionarios(string,int,string,bool,bool,bool,string);
		Revolucionarios(string,int,string,bool,bool,bool,string, Fruta*);
		string getFecha();

};