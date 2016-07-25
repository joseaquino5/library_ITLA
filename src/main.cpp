//============================================================================
// Name        : Colas.cpp
// Author      : VMeta
// Version     :
// Copyright   : Your copyright notice
// Description : Library Management System in C++, Ansi-style
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

	return 0;
}
