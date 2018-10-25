#pragma once
#include <cmath>
#include <iostream>
using namespace std;

class Punto
{
	private:
		double x;
		double y;
	public:
		Punto(double x=0.0, double y=0.0);
		Punto(const Punto & inst);
		void operator =(const Punto & inst);
		~Punto();
		//obtener
		double obtenerX() const;
		double obtenerY() const;
		//cambiar
		void cambiarX(double x);
		void cambiarY(double y);
		//cuadrante 1,2,3,4,origen
		bool cuadrante1() const;
		bool cuadrante2() const;
		bool cuadrante3() const;
		bool cuadrante4() const;
		bool ejeX() const;
		bool ejeY() const;
		bool origen() const;
		//calc dist entre dos puntos
		double distancia(const Punto & inst) const;
		//mostrar
		void mostrarX() const;
		void mostrarY() const;
		void mostrarXY() const;
		void mostrarCuadrante() const;

		//pedir
		void pedirCoordenadas();
};

