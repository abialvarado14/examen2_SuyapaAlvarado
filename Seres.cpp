#include "Seres.h"


Seres::Seres(string Raza, int years, string name, bool hakio, bool hakia, bool hakik){
	raza = Raza;
	edad = years;
	nombre = name;
	hakiobs = hakio;
	hakiarm = hakia;
	hakiking = hakik;
}

Seres::Seres(string Raza, int years, string name, bool hakio, bool hakia, bool hakik, Fruta* f){
	raza = Raza;
	edad = years;
	nombre = name;
	hakiobs = hakio;
	hakiarm = hakia;
	hakiking = hakik;
	fruit = f;
}

string Seres::getRaza(){
	return raza;
}

int Seres::getEdad(){
	return edad;
}

string Seres::getNombre(){
	return  nombre;
}

bool Seres::getHakiobs(){
	return hakiobs;
}

bool Seres::getHakiarm(){
	return hakiarm;
}

bool Seres::getHakiking(){
	return hakiking;
}
