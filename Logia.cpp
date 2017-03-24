#include "Fruta.h"
#include "Logia.h"

Logia:: Logia(string name, string element) : Fruta (name){
	elemento = element;
	nombre = name;
}

string Logia::getElemento(){
	return elemento;
}