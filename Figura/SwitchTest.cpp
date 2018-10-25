#include "SwitchTest.h"

SwitchTest::SwitchTest() {}
SwitchTest::~SwitchTest() {}

void SwitchTest::menu() {
	int seleccion;
	cout << "Seleccione la prueba: " << endl
		<< "1 - Rectangulo" << endl
		<< "2 - Circulo" << endl
		<< "Seleccion: ";
	cin >> seleccion;
	switch (seleccion) {
		case 1:
			SwitchTest::testRectangulo();
		case 2:
			SwitchTest::testCirculo();
	}
}

void SwitchTest::testRectangulo() {
	Rectangulo r1;
	Rectangulo r2;
	Rectangulo r3(2.0, 2.0);
	Rectangulo r4(r2);
	double area, base, altura;

	area = r1.area();
	cout << "El area de la instancia r1 es " << area << endl << endl;

	area = r2.area();
	cout << "El area de la instancia r2 es " << area << endl << endl;

	area = r3.area();
	cout << "El area de la instancia r3 es " << area << endl << endl;

	area = r4.area();
	cout << "El area de la instancia r4 es " << area << endl << endl;

	cout << "Entre la nueva altura de la instancia r1: ";
	cin >> altura;
	r1.cambiarAltura(altura);

	cout << "Entre la nueva base de la instancia r1: ";
	cin >> base;
	r1.cambiarBase(base);

	area = r1.area();
	cout << "El area de la instancia r1 es " << area << endl << endl;

	r4.cambiarBase(20.5);
	cout << "Cambiando la base de r4 a 20.5: " << endl;
	cout << "La base de la instancia r4 es " << r4.obtenerBase() << endl << endl;
}

void SwitchTest::testCirculo() {
	Circulo c1;
	Circulo c2;
	Circulo c3(2.0);
	Circulo c4(c2);
	double area, circumferencia, radio;

	area = c1.area();
	cout << "El area de la instancia r1 es " << area << endl << endl;

	area = c2.circunferencia();
	cout << "El area de la instancia r2 es " << area << endl << endl;

	area = c3.area();
	cout << "El area de la instancia r3 es " << area << endl << endl;

	area = c4.circunferencia();
	cout << "El area de la instancia r4 es " << area << endl << endl;

	cout << "Entre el nuevo radio de la instancia r1: ";
	cin >> radio;
	c1.cambiarRadio(radio);

	area = c1.area();
	cout << "El area de la instancia r1 es " << area << endl << endl;

	c4.pedirRadio();
	cout << "El radio de la instancia r4 es " << c4.obtenerRadio() << endl << endl;

}