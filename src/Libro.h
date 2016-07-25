/*
 * Elemento.h
 *
 *  Created on: 24 jul. 2016
 *      Author: José Aquino
 */

#ifndef LIBRO_H_
#define LIBRO_H_
#include <string>

namespace ITLA
{

	class Libro
	{
		private:
			std::string _titulo;
			std::string _autor;
			std::string _editora;
			std::string _publicacion;
			std::string _categoria;
			Libro*_siguiente;
		public:
			Libro();
		
			virtual ~Libro();

			std::string getAutor() { return _autor; }

			void setAutor(std::string autor) { _autor = autor; }

			std::string getCategoria() { return _categoria; }

			void setCategoria(std::string categoria) { _categoria = categoria;}

			std::string getEditora()  { return _editora; }

			void setEditora(std::string editora) { _editora = editora; }

			std::string getPublicacion() { return _publicacion; }

			void setPublicacion(std::string publicacion) { _publicacion = publicacion; }

			std::string getTitulo() {return _titulo;}

			void setTitulo(std::string titulo) {_titulo = titulo;}

			Libro* getSiguiente()  {return _siguiente;}

			void setSiguiente(Libro* siguiente) {_siguiente = siguiente;}
};

} /* namespace ITLA */

#endif /* LIBRO_H_ */
