#pragma once
#include <string>
using namespace std;

class Seres{
	private:
		string raza;
		int edad;
		string nombre;
		bool hakiobs;
		bool hakiarm;
		bool hakiking;

	public:
		Seres(string,int,string,bool,bool,bool);
		string getRaza();
		int getEdad();
		string getNombre();
		bool getHakiobs();
		bool getHakiarm();
		bool getHakiking();
};