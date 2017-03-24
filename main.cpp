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
#include <fstream>
using namespace std;

int main(){
	ofstream archivo;

	int opc, edad, opcrang, opcocean, opctipofruta, opctipz;
	char resp='s';
	vector <Seres*> seres;
	vector <Fruta*> frutas;
	string name_personaje, raza, fecha_marin,fecha_rev, rango, oceano, trip, func, name_fruit, desc_par, tipzoan, animal_zoan, element_logia;
	bool hakiarm, hakiobs, hakirey;


	cout << "----EXAMEN II----" << endl;
	while (resp=='s'||resp=='S'){
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
			cout << "\nTiene fruta del diablo? 1.Si o 2.No ";
			cin >> opc;
			if (opc==1){

				cout << "\nIngrese el nombre de la fruta: ";
				cin >> name_fruit;

				cout << "\nIngrese el tipo de la fruta: \n1.Paramecia\n2.Zoan\3.Logia: ";
				cin >> opctipofruta;

				if (opctipofruta==1){
					cout << "\nIngrese la descripcion:";
					cin >> desc_par;
					Paramecia* paramecia = new Paramecia(name_fruit,desc_par);
					frutas.push_back(paramecia);
					Marina* marin_ser = new Marina(fecha_marin,rango,raza,edad,name_personaje,hakiobs,hakiarm,hakirey, paramecia);
					seres.push_back(marin_ser);
					archivo.open(name_personaje.c_str());
					archivo << name_personaje << " " << fecha_marin << " " << rango << " " << raza << " " << edad << " " << "Haki observacion: " << hakiobs << "Haki Armadura: " << hakiarm << "Haki Rey: " << hakirey << "Fruta: " << paramecia->getDescripcion();
				
				archivo.close();

				}else if(opctipofruta==2){
					cout << "\nQue tipo es?:\n1.Normal\n2.Prehistoria\n3.Legendaria: ";
					cin >> opctipz;
					if (opctipz==1)
						tipzoan="Normal";
					else if (opctipz==2)
						tipzoan="Prehistoria";
					else if(opctipz==3)
						tipzoan="Legendaria";
					else{
						cout <<"Tipo no existente";
						tipzoan="desconocida";
					}
					cout << "\nQue animal reprenta?: ";
					cin >> animal_zoan;
					Zoan* zoan = new Zoan(name_personaje, tipzoan, animal_zoan);
					frutas.push_back(zoan);
					Marina* marin_ser = new Marina(fecha_marin,rango,raza,edad,name_personaje,hakiobs,hakiarm,hakirey, zoan);
					seres.push_back(marin_ser);
					name_personaje = name_personaje+".log";
					archivo.open(name_personaje.c_str());
					archivo << name_personaje << " " << fecha_marin << " " << rango << " " << raza << " " << edad << " " << "Haki observacion: " << hakiobs << "Haki Armadura: " << hakiarm << "Haki Rey: " << hakirey << "Fruta: " << zoan->getAnimal();
					archivo.close();
				}else{
					cout << "\nIngrese el elemento que representa: ";
					cin >> element_logia;
					Logia* logia = new Logia(name_personaje, element_logia);
					frutas.push_back(logia);
					Marina* marin_ser = new Marina(fecha_marin,rango,raza,edad,name_personaje,hakiobs,hakiarm,hakirey, logia);
					seres.push_back(marin_ser);
					name_personaje = name_personaje+".log";
					archivo.open(name_personaje.c_str());
					archivo << name_personaje << " " << fecha_marin << " " << rango << " " << raza << " " << edad << " " << "Haki observacion: " << hakiobs << "Haki Armadura: " << hakiarm << "Haki Rey: " << hakirey << "Fruta: " << logia->getElemento();
					archivo.close();
				}
			//FIN AGREGAR FRUTAS
			}else{
				Marina* marin_ser = new Marina(fecha_marin,rango,raza,edad,name_personaje,hakiobs,hakiarm,hakirey);
				seres.push_back(marin_ser);
				name_personaje = name_personaje+".log";
				archivo.open(name_personaje.c_str());
				archivo << name_personaje << " " << fecha_marin << " " << rango << " " << raza << " " << edad << " " << "Haki observacion: " << hakiobs << "Haki Armadura: " << hakiarm << "Haki Rey: " << hakirey;
				
				archivo.close();		
			}
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

			if (opc==1){

				cout << "\nIngrese el nombre de la fruta: ";
				cin >> name_fruit;

				cout << "\nIngrese el tipo de la fruta: \n1.Paramecia\n2.Zoan\3.Logia: ";
				cin >> opctipofruta;

				if (opctipofruta==1){
					cout << "\nIngrese la descripcion:";
					cin >> desc_par;
					Paramecia* paramecia = new Paramecia(name_fruit,desc_par);
					frutas.push_back(paramecia);
					Piratas* piratas_ser = new Piratas(raza,edad,name_personaje, hakiobs, hakiarm, hakirey, oceano, trip, func, paramecia);
					seres.push_back(piratas_ser);
				
				}else if(opctipofruta==2){
					cout << "\nQue tipo es?:\n1.Normal\n2.Prehistoria\n3.Legendaria: ";
					cin >> opctipz;
					if (opctipz==1)
						tipzoan="Normal";
					else if (opctipz==2)
						tipzoan="Prehistoria";
					else if(opctipz==3)
						tipzoan="Legendaria";
					else{
						cout <<"Tipo no existente";
						tipzoan="desconocida";
					}
					cout << "\nQue animal reprenta?: ";
					cin >> animal_zoan;
					Zoan* zoan = new Zoan(name_personaje, tipzoan, animal_zoan);
					frutas.push_back(zoan);
					Piratas* piratas_ser = new Piratas(raza,edad,name_personaje, hakiobs, hakiarm, hakirey, oceano, trip, func,zoan);
					seres.push_back(piratas_ser);

				}else{
					cout << "\nIngrese el elemento que representa: ";
					cin >> element_logia;
					Logia* logia = new Logia(name_personaje, element_logia);
					frutas.push_back(logia);

					Piratas* piratas_ser = new Piratas(raza,edad,name_personaje, hakiobs, hakiarm, hakirey, oceano, trip, func,logia);
					seres.push_back(piratas_ser);
				}
			//FIN AGREGAR FRUTAS
			}else{
				Piratas* piratas_ser = new Piratas(raza,edad,name_personaje, hakiobs, hakiarm, hakirey, oceano, trip, func);
				seres.push_back(piratas_ser);
				archivo.open(name_personaje.c_str());
				archivo << name_personaje << " " << trip << " " << oceano << " " << raza << " " << edad << " " << "Haki observacion: " << hakiobs << "Haki Armadura: " << hakiarm << "Haki Rey: " << hakirey << func;
				
				archivo.close();
				
			}


			
		}
			break;
		case 3:{
			cout << "\nFecha de ingreso:";
			cin >> fecha_rev;

			cout << "\nTiene fruta del diablo? 1.Si o 2.No ";
			cin >> opc;
			if (opc==1){

				cout << "\nIngrese el nombre de la fruta: ";
				cin >> name_fruit;

				cout << "\nIngrese el tipo de la fruta: \n1.Paramecia\n2.Zoan\3.Logia: ";
				cin >> opctipofruta;

				if (opctipofruta==1){
					cout << "\nIngrese la descripcion:";
					cin >> desc_par;
					Paramecia* paramecia = new Paramecia(name_fruit,desc_par);
					frutas.push_back(paramecia);
					Revolucionarios* revo_ser = new Revolucionarios(raza, edad, name_personaje, hakiobs, hakiarm, hakirey, fecha_rev, paramecia);
					seres.push_back(revo_ser);
					
				}else if(opctipofruta==2){
					cout << "\nQue tipo es?:\n1.Normal\n2.Prehistoria\n3.Legendaria: ";
					cin >> opctipz;
					if (opctipz==1)
						tipzoan="Normal";
					else if (opctipz==2)
						tipzoan="Prehistoria";
					else if(opctipz==3)
						tipzoan="Legendaria";
					else{
						cout <<"Tipo no existente";
						tipzoan="desconocida";
					}
					cout << "\nQue animal reprenta?: ";
					cin >> animal_zoan;
					Zoan* zoan = new Zoan(name_personaje, tipzoan, animal_zoan);
					frutas.push_back(zoan);
					Revolucionarios* revo_ser = new Revolucionarios(raza, edad, name_personaje, hakiobs, hakiarm, hakirey, fecha_rev,zoan);
					seres.push_back(revo_ser);

				}else{
					cout << "\nIngrese el elemento que representa: ";
					cin >> element_logia;
					Logia* logia = new Logia(name_personaje, element_logia);
					frutas.push_back(logia);
					Revolucionarios* revo_ser = new Revolucionarios(raza, edad, name_personaje, hakiobs, hakiarm, hakirey, fecha_rev, logia);
					seres.push_back(revo_ser);
				}
			//FIN AGREGAR FRUTAS
			}else{
				Revolucionarios* revo_ser = new Revolucionarios(raza, edad, name_personaje, hakiobs, hakiarm, hakirey, fecha_rev);
				seres.push_back(revo_ser);
				archivo.open(name_personaje.c_str());
				archivo << name_personaje << " " << fecha_rev << " " << " " << raza << " " << edad << " " << "Haki observacion: " << hakiobs << "Haki Armadura: " << hakiarm << "Haki Rey: " << hakirey;
				
				archivo.close();
				
			}

		}

	}//fin switch

	archivo.close();
	cout << "\n\nDesea continuar agregando??[s/n]: ";
	cin >> resp;
}
return 0;
}