#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;
class Circulo {
	private:
		double radio;
	public:
		Circulo();
		Circulo(double radio);
		Circulo(const Circulo & unaInstancia);
		~Circulo();
		double obtenerRadio() const;
		void cambiarRadio(double radio);
		double circunferencia() const;
		double area() const;
		void mostrarRadio() const;
		void mostrarArea() const;
		void mostrarCircunferencia() const;
		void mostrarInfo() const;
		void pedirRadio();
		bool radioCmp(const Circulo & c2) const;
		double sumarArea(const Circulo & c2, const Circulo & c3);

		friend istream & operator >>(istream & in,
			Circulo & unaInstancia);
		friend ostream & operator <<(ostream & out,
			const Circulo & unaInstancia);

};