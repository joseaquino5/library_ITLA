/*
 * Cola.h
 *
 *  Created on: 24 jul. 2016
 *      Author: José Aquino
 */

#ifndef COLA_H_
#define COLA_H_
#include "Libro.h"

namespace ITLA
{

	class Pila
	{
		private:
			Libro* _ultimo;
		public:
			void agregar(Libro* elemento);
			Libro* pop();
			Pila();
			virtual ~Pila();

			Libro* getUltimo() {return _ultimo; }
};

	} /* namespace ITLA */

#endif /* COLA_H_ */
