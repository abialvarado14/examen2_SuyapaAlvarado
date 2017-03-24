#pragma once
#include <string>
#include "Fruta.h"
using namespace std;

class Seres{
	protected:
		string raza;
		int edad;
		string nombre;
		bool hakiobs;
		bool hakiarm;
		bool hakiking;
		Fruta* fruit;

	public:
		Seres(string,int,string,bool,bool,bool);
		Seres(string, int, string, bool, bool, bool, Fruta*);
		string getRaza();
		int getEdad();
		string getNombre();
		bool getHakiobs();
		bool getHakiarm();
		bool getHakiking();
};