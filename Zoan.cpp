#include "Fruta.h"
#include "Zoan.h"

Zoan::Zoan(string name, string tip, string anim) : Fruta(name){
	tipo = tip;
	animal = anim;
} 

string Zoan::getTipo(){
	return tipo;
}

string Zoan::getAnimal(){
	return animal;
}