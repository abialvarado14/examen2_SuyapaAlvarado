#include "Marina.h"
#include "Seres.h"

Marina:: Marina(string date, string Rang, string Raza, int years, string name, bool hakio, bool hakia, bool hakik) : Seres(Raza, years, name, hakio, hakia, hakik){
	fecha = date;
	rango = Rang;
	raza = Raza;
	edad = years;
	nombre = name;
	hakiobs = hakio;
	hakiarm = hakia;
	hakiking = hakik;
}

string Marina::getFecha(){
	return fecha;
}

string Marina::getRango(){
	return rango;
}