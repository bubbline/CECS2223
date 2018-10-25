#include "Rectangulo.h"


Rectangulo::Rectangulo(double width, double length) {
	this->width = width;
	this->length = length;
}

Rectangulo::Rectangulo()
{
	this->width = 3.0;
	this->length = 4.0;
}


Rectangulo::~Rectangulo()
{
}

Rectangulo::Rectangulo(const Rectangulo & anInstance) {
	this->width = anInstance.width;
	this->length = anInstance.length;
}

double Rectangulo::obtenerAltura() const {
	return this->length;
}

double Rectangulo::obtenerBase() const {
	return this->width;
}

void Rectangulo::cambiarBase(double width) {
	this->width = width;
}

void Rectangulo::cambiarAltura(double length) {
	this->length = length;
}

double Rectangulo::area() const {
	return (this->length * this->width);
}

void Rectangulo::mostrarArea() const {
	cout << "Area: " << this->area() << endl;
}

void Rectangulo::mostrarInfo() const {
	cout << "Base: " << this->width << endl;
	cout << "Altura: " << this->length << endl;
	cout << "Area: " << this->area() << endl;
}

void Rectangulo::pedirDimensiones(){
	cout << "Base: ";
	cin >> this->width;
	while (this->width <= 0.0) {
		cout << "ERROR: El valor tiene que ser mayor que un cero." << endl;
		cout << "Base: ";
		cin >> this->width;
	}
	cout << "Altura: ";
	cin >> this->length;
	while (this->length <= 0.0) {
		cout << "ERROR: El valor tiene que ser mayor que cero." << endl;
		cout << "Altura: ";
		cin >> this->length;
	}
}