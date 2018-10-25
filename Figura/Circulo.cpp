#include "Circulo.h"



Circulo::Circulo(double radio) {
	this->radio = radio;
}

Circulo::Circulo() {
	this->radio = 5; // default value
}

Circulo::Circulo(const Circulo & unaInstancia) {
	this->radio = unaInstancia.radio;
}

Circulo::~Circulo() {}

double Circulo::obtenerRadio() const {
	return this->radio;
}

void Circulo::cambiarRadio(double radio) {
	this->radio = radio;
}

double Circulo::circunferencia() const {
	return M_PI * 2 * this->radio;
}

double Circulo::area() const {
	return M_PI * this->radio * this->radio;
}

void Circulo::mostrarRadio() const {
	cout << "Radio: " << this->radio << endl;
}

void Circulo::mostrarArea() const {
	cout << "Area: " << this->area() << endl;
}

void Circulo::mostrarCircunferencia() const {
	cout << "Circunferencia: " << this->circunferencia() << endl;
}

void Circulo::mostrarInfo() const {
	cout << "Radio: " << this->radio << endl;
	cout << "Area: " << this->area() << endl;
}

void Circulo::pedirRadio() {
	cout << "Radio: ";
	cin >> this->radio;
	while (this->radio <= 0.0) {
		cout << "ERROR: El valor tiene que ser mayor que un cero." << endl;
		cout << "Radio: ";
			cin >> this->radio;
	}
}

bool Circulo::radioCmp(const Circulo & c2) const {
	return this->radio > c2.radio;
}

double Circulo::sumarArea(const Circulo & c2, const Circulo & c3)
{
	return this->area() + c2.area() + c3.area();
}
