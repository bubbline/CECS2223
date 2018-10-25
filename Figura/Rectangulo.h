#pragma once
#include <iostream>
using namespace std;
class Rectangulo
{
	private:
		double width; // base
		double length; // altura
	public:
		Rectangulo(double width, double length);
		Rectangulo();
		Rectangulo(const Rectangulo & anInstance);
		~Rectangulo();
		double obtenerBase() const; // getWidth
		double obtenerAltura() const; // getLength
		void cambiarBase(double width); // setWidth
		void cambiarAltura(double height); // setLength
		double area() const;
		void mostrarArea() const; // showArea
		void mostrarInfo() const; // showInfo
		void pedirDimensiones(); // showDimensions
};

