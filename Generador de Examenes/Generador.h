#pragma once
#include "Examen.h"
class Generador
{
private:
	Examen examen;
public:
	Generador();
	~Generador();
	Generador(const Generador & inst);
	Generador & operator=(const Generador & inst);

	friend istream & operator>>(istream & in, Generador & inst);
};

