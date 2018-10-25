#pragma once
#include "Encabezado.h"
#include "Preguntas.h"
#include "Examen.h"

class Examen
{
private:
	Encabezado encabezado;
	Preguntas preguntas;
public:
	Examen();
	Examen(const Examen & unExamen);
	~Examen();
	Examen & operator=(const Examen & unExamen);

	friend istream & operator>>(istream & in, Examen & inst);
	friend ostream & operator<<(ostream & out, Examen & inst);
};

