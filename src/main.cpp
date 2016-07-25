//============================================================================
// Name        : Colas.cpp
// Author      : VMeta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "LibraryManagement.h"

using namespace ITLA;

int main() {

	LibraryManagement* library = new LibraryManagement();
	while(true){
		library -> printMenu();
	}
	delete library;

//	Libro* libro1 = new Libro();
//	libro1->setTitulo("libro 1");
//	Libro* libro2 = new Libro();
//	libro2->setTitulo("libro 2");
//	Libro* libro3 = new Libro();
//	libro3->setTitulo("libro 3");
//	Libro* libro4 = new Libro();
//	libro4->setTitulo("libro 4");
//	Libro* libro5 = new Libro();
//	libro5->setTitulo("libro 5");
//
//	Pila* pila = new Pila();
//	pila->agregar(libro1);
//	pila->agregar(libro2);
//	pila->agregar(libro3);
//	pila->agregar(libro4);
//	pila->agregar(libro5);
//
//		Libro* iterator = pila->extraer();
//
//		while(iterator != NULL){
//			cout << iterator -> getTitulo() <<endl;
//			delete iterator;
//			iterator = pila->extraer();
//		}
//		delete pila;

	return 0;
}
