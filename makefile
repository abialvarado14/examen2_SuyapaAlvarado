main: Zoan.o Logia.o Paramecia.o Seres.o Marina.o Revolucionarios.o Fruta.o Piratas.o main.o
	g++ Zoan.o Logia.o Paramecia.o Seres.o Marina.o Revolucionarios.o Fruta.o Piratas.o main.o -o main

main.o: main.cpp Zoan.h Logia.h Paramecia.h Seres.h Marina.h Revolucionarios.h Fruta.h Piratas.h 
	g++ -c main.cpp

Zoan.o:		Zoan.h Zoan.cpp Fruta.h
	g++ -c Zoan.cpp

Logia.o:	Logia.h Logia.cpp Fruta.h
	g++ -c Logia.cpp

Paramecia.o:	Paramecia.h Paramecia.cpp Fruta.h
	g++ -c Paramecia.cpp

Seres.o:		Seres.h Seres.cpp 
	g++ -c Seres.cpp

Marina.o:	Marina.h Marina.cpp Seres.h
	g++ -c Marina.cpp

Revolucionarios.o:	Revolucionarios.h Revolucionarios.cpp Seres.h
	g++ -c Revolucionarios.cpp

Fruta.o:	Fruta.h Fruta.cpp 
	g++ -c Fruta.cpp

Piratas.o:	Piratas.h Piratas.cpp 
	g++ -c Piratas.cpp 












