#pragma once
#include "..\Tipo\MyDate.h"
#include "..\Tipo\MyTime.h"
#include "..\Colección\ListaDeCadenas.h"
#include "..\Utilidad\MyMenu.h"
#include <iostream>
#include <cmath>
using namespace std;


class Encabezado
{
private:
	MyDate fecha;
	MyTime hora;
	ListaDeCadenas etiquetas;
public:
	Encabezado();
	Encabezado(ListaDeCadenas etiquetas, MyDate fecha, MyTime hora);
	~Encabezado();
	Encabezado(const Encabezado & inst);
	Encabezado & operator=(const Encabezado & inst);

	void setFecha(MyDate & fecha);
	void setHora(MyTime & hora);

	const MyDate & getFecha()const;
	const MyTime & getHora()const;

	void mostrarHora() const;

	void agregarEtiqueta(int indice, MyString & unaCadena);
	void removerEtiqueta(int indice);
	
	friend ostream & operator<<(ostream & out, Encabezado & inst);
	friend istream & operator>>(istream & in, Encabezado & inst);
};




