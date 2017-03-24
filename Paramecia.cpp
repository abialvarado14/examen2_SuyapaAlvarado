#include "Paramecia.h"
#include "Fruta.h"

Paramecia::Paramecia(string name, string desc) : Fruta(name){
	nombre = name;
	descripcion = desc;
}

string Paramecia::getDescripcion(){
	return descripcion;
}