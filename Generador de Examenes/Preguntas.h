#pragma once
#include "..\Tipo\MyString.h"
#include "..\Colección\ListaDeCadenas.h"
#include "..\Utilidad\MyMenu.h"
#include <iostream>
using namespace std;

class Preguntas
{
private:
	MyString etiqueta;
	ListaDeCadenas preguntas;
public:
	Preguntas(MyString etiqueta = "Preguntas");
	Preguntas(const Preguntas & inst);
	~Preguntas();
	Preguntas & operator=(const Preguntas & inst);

	void setEtiqueta(const MyString & cadena);
	void setEtiqueta(const char * cadena);

	const MyString & getEtiqueta() const;

	void agregarPregunta(int indice, const MyString & cadena);
	void agregarPregunta(int indice, const char * cadena);

	void removerPregunta(int indice);

	void mostrarEtiqueta() const;
	void mostrarEtiquetaConColon() const;
	void mostrarPreguntas() const;

	friend istream & operator>>(istream & in, Preguntas & inst);
	friend ostream & operator<<(ostream & out, Preguntas & inst);
};

