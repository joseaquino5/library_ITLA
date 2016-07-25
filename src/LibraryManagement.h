/*
 * LibraryManagement.h
 *
 *  Created on: 24 jul. 2016
 *      Author: José Aquino
 */

#ifndef LIBRARYMANAGEMENT_H_
#define LIBRARYMANAGEMENT_H_
#include <iostream>
#include <cstdlib>
#include <sstream>
#include "Pila.h"

using namespace std;

namespace ITLA
{

	class LibraryManagement
	{
		private:
			Pila* _pila;
			string _option;
		public:
			void printMenu();
			void verifyOption();
			void listItems();
			void addItem();
			void printAllItems();
			void printBook(Libro* libro);
			void  lastBookStack();
			void filterBookByCategory();
			LibraryManagement();
			virtual ~LibraryManagement();
	};

} /* namespace ITLA */

#endif /* LIBRARYMANAGEMENT_H_ */
