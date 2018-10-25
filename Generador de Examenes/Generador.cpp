#include "Generador.h"



Generador::Generador()
{
	Examen examen;
	this->examen = examen;
}


Generador::~Generador()
{
}

Generador::Generador(const Generador & inst)
{
	(*this) = inst;
}

Generador & Generador::operator=(const Generador & inst)
{
	this->examen = inst.examen;
	return (*this);
}

istream & operator>>(istream & in, Generador & inst)
{
	MyMenu menu("Menu Generador", "Seleccion:");
	MyString nueva;
	int choice;

	menu.agregarOpcion("Generar Examen.");           // 1
	menu.agregarOpcion("Retornar Examen.");          // 2
	menu.agregarOpcion("Terminar.");                 // 3


	do {

		cout << menu;
		cin >> choice;

		switch (choice) {
		case 1: // Generar Examen
			cout << "----------------" << endl;
			cin >> inst.examen;
			break;
		case 2: // Retornar Examen
			cout << inst.examen;
			break;
		case 3:
			break;
		default:
			break;
		}
		cout << "----------------" << endl;
	} while (choice != 3);
	return in;
}
