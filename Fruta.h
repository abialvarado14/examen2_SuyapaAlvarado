#pragma once
#include <string>
using namespace std;

class Fruta{
	protected:
		string nombre;
	public:
		Fruta(string);
		string getNombre();
};