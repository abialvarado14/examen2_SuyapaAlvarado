#include "Revolucionarios.h"


Revolucionarios::Revolucionarios(string Raza, int years, string name, bool hakio, bool hakia, bool hakik, string fecha) : Seres(Raza, years, name, hakio, hakia, hakik){
	fechaing = fecha;
	raza = Raza;
	edad = years;
	nombre = name;
	hakiobs = hakio;
	hakiarm = hakia;
	hakiking = hakik;
}

Revolucionarios::Revolucionarios(string Raza, int years, string name, bool hakio, bool hakia, bool hakik, string fecha, Fruta* f) : Seres(Raza, years, name, hakio, hakia, hakik, f){
	fechaing = fecha;
	raza = Raza;
	edad = years;
	nombre = name;
	hakiobs = hakio;
	hakiarm = hakia;
	hakiking = hakik;
	fruit = f;
}

string Revolucionarios::getFecha(){
	return fechaing;
}
