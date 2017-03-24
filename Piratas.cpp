#include "Seres.h"

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

Piratas::getOceano(){
	return oceano;
}

Piratas::getTripulacion(){
	return tripulacion;
}

Piratas::getFuncion(){
	return funcion;
}