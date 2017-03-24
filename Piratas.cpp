#include "Seres.h"
#include "Piratas.h"

Piratas::Piratas(string Raza, int years, string name, bool hakio, bool hakia, bool hakik, string ocean, string trip, string func) : Seres(Raza, years, name, hakio, hakia, hakik){
	oceano = ocean;
	tripulacion = trip;
	funcion = func;
	raza = Raza;
	edad = years;
	nombre = name;
	hakiobs = hakio;
	hakiarm = hakia;
	hakiking = hakik;
}

Piratas::Piratas(string Raza, int years, string name, bool hakio, bool hakia, bool hakik, string ocean, string trip, string func, Fruta* f) : Seres(Raza, years, name, hakio, hakia, hakik, f){
	oceano = ocean;
	tripulacion = trip;
	funcion = func;
	raza = Raza;
	edad = years;
	nombre = name;
	hakiobs = hakio;
	hakiarm = hakia;
	hakiking = hakik;
	fruit = f;
}

string Piratas::getOceano(){
	return oceano;
}

string Piratas::getTripulacion(){
	return tripulacion;
}

string Piratas::getFuncion(){
	return funcion;
}