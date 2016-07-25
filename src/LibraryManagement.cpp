/*
 * LibraryManagement.cpp
 *
 *  Created on: 24 jul. 2016
 *      Author: José Aquino
 */

#include "LibraryManagement.h"

namespace ITLA
{

	LibraryManagement::LibraryManagement() : _pila(new Pila())
	{


	}

	void LibraryManagement::printMenu()
	{
	  cout <<"\n\n\t\t\tWelcome to Library Management System\n"<< endl;
	  cout <<"You have to choose an option (Type the number of the option do you want to execute): \n"<< endl;
	  cout <<"1. List Books"<< endl;
	  cout <<"2. Add Book"<< endl;
	  cout <<"3. Request latest book stack"<< endl;
	  cout <<"4. Search book by category"<< endl;
	  cout <<"5. Exit"<< endl;
	  cout <<"\nType your option: ";
	  cin >> _option;
	  cout << endl;
	  verifyOption();
	}

	void LibraryManagement::verifyOption()
	{
        while(!(_option == "1" || _option == "2" || _option == "3" || _option == "4"  || _option == "5")){
        	cout <<"Try again please you type an invalid option: ";
             cin >> _option;
         }

        if(_option == "1"){
        	listItems();
        }
        else if(_option == "2"){
        	addItem();
        }

        else if(_option == "3"){
        	lastBookStack();
        }
        else if(_option == "4"){
        	filterBookByCategory();
         }

        else{
        	cout << "See, back soon" << endl;
        	exit(EXIT_SUCCESS);
        }
        _option="";
	}

	void LibraryManagement::listItems()
	{
		if(_pila -> getUltimo() == NULL){
			cout <<"You don't have any books in your library management, you'll be return to the main menu."<< endl;
			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();

		}else{
			cout <<"books's stack:\n"<< endl;
			printAllItems();
			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();
		}
	}

	void LibraryManagement::addItem()
	{
		Libro* libro = new Libro();
		cout <<"Entering book"<< endl;
		cout <<"Book's title: ";
		cin >> _option;
		libro->setTitulo(_option);
		cout << "Book's author: ";
		cin >> _option;
		libro->setAutor(_option);
		cout <<"Book's editor: ";
		cin >> _option;
		libro->setEditora(_option);
		cout <<"Book's publication: ";
		cin >> _option;
		libro->setPublicacion(_option);
		cout <<"Book's category: ";
		cin >> _option;
		libro->setCategoria(_option);

		_pila->agregar(libro);
		cout <<"Book Added. Press ENTER to return to the main menu...";
	    cin.ignore();
	    cin.get();
	}

	void LibraryManagement::printAllItems()
	{
		Libro* iterator = _pila -> getUltimo();
		int i = 1;
		while(iterator != NULL){
			cout << "Book " << i << ":"  << endl;
			printBook(iterator);
			iterator = iterator->getSiguiente();
			i++;
		}
		cout <<  endl;
	}

	void LibraryManagement::printBook(Libro* libro)
	{
		cout << "   Title: " << libro -> getTitulo() << endl;
		cout << "   Author: " << libro -> getAutor() << endl;
		cout << "   Editor: " << libro -> getEditora() << endl;
		cout << "   Publication: " << libro -> getPublicacion() << endl;
		cout << "   Category: " << libro -> getCategoria() << endl;
		cout << "==============================Divisor==============================" << endl;
	}

	void LibraryManagement::lastBookStack()
	{
		Libro* libro = _pila->pop();
		if(libro == NULL){
			cout <<"You don't have any books in your library management, you'll be return to the main menu."<< endl;
			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();
		}else{
			cout << "Last Book" << " :"  << endl;
	    	printBook(libro);
	    	delete libro;
			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();
		}

	}

	void LibraryManagement::filterBookByCategory()
	{
		if(_pila -> getUltimo() == NULL){
			cout <<"You don't have any books in your library management, you'll be return to the main menu."<< endl;
			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();

		}else{
			cout <<"Type the category you want to search: ";
			cin >> _option;

			Libro* iterator = _pila ->pop();
			while(iterator != NULL){
				cout << "It has been removed from the book: " << iterator->getTitulo() << ((iterator->getCategoria() == _option) ? ". Meets" : ", does not meet") << " with the search criteria." << endl;
				delete iterator;
				iterator = _pila ->pop();
			}

			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();
		}
	}

	LibraryManagement::~LibraryManagement()
	{
		Libro* iterator = _pila->pop();

		while(iterator != NULL){
			delete iterator;
			iterator = _pila->pop();
		}
		delete _pila;
	}

} /* namespace ITLA */
