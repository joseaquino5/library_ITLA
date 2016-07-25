/*
 * Cola.cpp
 *
 *  Created on: 24 jul. 2016
 *      Author: José Aquino
 */

#include "Pila.h"

namespace ITLA
{

	Pila::Pila() : _ultimo(NULL)
	{

	}

	void Pila::agregar(Libro* libro) {

		if(!_ultimo){
			_ultimo = libro;
		}else{
			libro -> setSiguiente(_ultimo);
			_ultimo = libro;
		}
	}

	Libro* Pila::pop()
	{
		if(_ultimo == NULL){
			return NULL;
		}
		Libro* retorno = _ultimo;
		_ultimo = _ultimo -> getSiguiente();

		return retorno;
	}

	Pila::~Pila() {

	}

} /* namespace ITLA */
