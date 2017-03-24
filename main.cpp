#include "Seres.h"
#include "Revolucionarios.h"
#include "Marina.h"
#include "Piratas.h"
#include "Fruta.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int opc, edad, opcrang, opcocean;
	vector <Seres*> seres;
	string name_personaje, raza, fecha_marin,fecha_rev, rango, oceano, trip, func;
	bool hakiarm, hakiobs, hakirey;

	cout << "----EXAMEN II----" << endl;
	cout << "---Agregar Personajes---" << endl;
	cout << "\nIngrese el nombre del personaje: ";
	cin >> name_personaje;
	cout << "\nQue raza es?\n1.Gyojin \n2.Kyojin\n3.Ningyo\n4.Humano\n5.Mink\n6.Skypieans : ";
	cin >> opc;

	switch (opc){
		
		case 1:
			raza = "Gyojin";
		break;

		case 2:
			raza = "Kyojin";
		break;
		
		case 3:
			raza = "Ningyo";
		break;

		case 4:
			raza = "Humano";
		break;

		case 5:
			raza = "Mink";
		break;

		case 6:
			raza = "Skypieans";
		break;
	}

	cout << "\nQue edad tiene el personaje? ";
	cin >> edad;

	cout << "\nTiene fruta del diablo? 1.Si o 2.No ";
	cin >> opc;

	cout << "\nTiene haki de armadura? 1.Si o 2.No ";
	cin >> opc;

	if(opc == 1)
		hakiarm = true;
	else
		hakiarm = false;

	cout << "\nTiene haki de observacion? 1.Si o 2.No ";
	cin >> opc;

	if (opc==1)
		hakiobs = true;
	else
		hakiobs = false;

	cout << "\nTiene haki del rey? 1.Si o 2.No ";
	cin >> opc;

	if (opc==1)
		hakirey=true;
	else
		hakirey=false;

	cout << "\nA que bando pertenece? \n1.Marina\n2.Piratas\n3.Revolucionarios ";
	cin >> opc;

	switch(opc){
		case 1:{
			cout << "\nLa fecha de ingreso es: ";
			cin >> fecha_marin;
			cout << "\nSu rango es:\n1.Cadete\n2.Teniente\n3.Vice-almirante\n4.Almirante\n5.Almirante de flota : ";
			cin >> opcrang;

			if (opcrang==1)
				rango = "Cadete";
			else if (opcrang==2)
				rango = "Teniente";
			else if (opcrang==3)
				rango = "Vice-almirante";
			else if (opcrang==4)
				rango = "Almirante";
			else if (opcrang==5)
				rango = "Almirante de flota";
			else{
				cout << "Numero invalido." << endl;
				rango = "NID"; //No identificado
			}
			Marina* marin_ser = new Marina(fecha_marin,rango,raza,edad,name_personaje,hakiobs,hakiarm,hakirey);
			seres.push_back(marin_ser);
		}
			break;

		case 2:{
			cout << "\nA que oceano pertenece?:\n1.East \n2.West\n3.Sourth\n4.NorthBlue\n5.GrandLine\n6.New World ";

			cin >> opcocean;

			if (opcocean==1)
				oceano = "East";
			else if(opcocean==2)
				oceano = "West";
			else if (opcocean==3)
				oceano = "Sourth";
			else if(opcocean==4)
				oceano = "North Blue";
			else if (opcocean==5)
				oceano = "Grand Line";
			else if (opcocean==6)
				oceano = "New World";
			else{
				cout << "Numero Invalido" << endl;
				oceano = "Desconocido";
			}
			cout << "\nA que tripulacion pertenece?";
			cin >> trip;
			cout << "\nQue función cumple:";
			cin >> func;

			Piratas* piratas_ser = new Piratas(raza,edad,name_personaje, hakiobs, hakiarm, hakirey, oceano, trip, func);
			seres.push_back(piratas_ser);
		}
			break;
		case 3:{
			cout << "\nFecha de ingreso:";
			cin >> fecha_rev;
			Revolucionarios* revo_ser = new Revolucionarios(raza, edad, name_personaje, hakiobs, hakiarm, hakirey, fecha_rev);
			seres.push_back(revo_ser);
		}
		
	}//fin switch

return 0;
}