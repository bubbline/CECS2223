/*#include "Punto.h"



Punto::Punto()
{
}

Punto::Punto(double x, double y)
{
	this->x = x;
	this->y = y;
}

Punto::Punto(const Punto & inst)
{
	this->x = inst.x;
	this->y = inst.y;
}

Punto::operator=(const Punto & inst)
{
	this->x = inst.x;
	this->y = inst.y;
}


Punto::~Punto()
{
}

double Punto::obtenerX() const
{
	return this->x;
}

double Punto::obtenerY() const
{
	return this->y;
}

void Punto::cambiarX(double x)
{
	this->x = x;
}

void Punto::cambiarY(double y)
{
	this->y = y;
}

bool Punto::cuadrante1() const
{
	return this->x > 0 && this->y > 0;
}

bool Punto::cuadrante2() const
{
	return this->x < 0 && this->y > 0;
}

bool Punto::cuadrante3() const
{
	return this->x < 0 && this->y < 0;
}

bool Punto::cuadrante4() const
{
	return this->x > 0 && this->y < 0;
}

bool Punto::ejeX() const
{
	return this->x == 0;
}

bool Punto::ejeY() const
{
	return this->y == 0;
}

bool Punto::origen() const
{
	return this->ejeX() && this->ejeY();
}

double Punto::distancia(const Punto & inst) const
{
	return sqrt(pow(this->x-inst.x, 2) + pow(this->y-inst.y, 2));
}


void Punto::mostrarX() const
{
	cout << "X: " << this->x << endl;
}

void Punto::mostrarY() const
{
	cout << "Y: " << this->y << endl;
}

void Punto::mostrarXY() const
{
	this->mostrarX();
	this->mostrarY();
	
}

void Punto::mostrarCuadrante() const
{
	int cuad = 0;
	if (this->cuadrante1()) cuad = 1;
	else if (this->cuadrante2()) cuad = 2;
	else if (this->cuadrante3()) cuad = 3;
	else if (this->cuadrante4()) cuad = 4;
	if (cuad == 0) cout << "No esta en un cuadrante" << endl;
	else cout << "Esta en el cuadrante" << cuad << endl;

}

void Punto::pedirCoordenadas()
{
	cout << "X: ";
	cin >> this->x;
	cout << "Y: ";
	cin >> this->y;
}
*/