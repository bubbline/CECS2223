#include "Examen.h"



Examen::Examen()
{
	Encabezado encabezado;
	Preguntas preguntas;
	this->encabezado = encabezado;
	this->preguntas = preguntas;
}

Examen::Examen(const Examen & unExamen)
{
	(*this) = unExamen;
}


Examen::~Examen()
{
}

Examen & Examen::operator=(const Examen & unExamen)
{
	this->encabezado = unExamen.encabezado;
	this->preguntas = unExamen.preguntas;
	return (*this);
}

istream & operator>>(istream & in, Examen & inst)
{
	MyMenu menu("Menu Examen", "Seleccion:");
	MyString nueva;
	int choice;

	menu.agregarOpcion("Ver Examen.");               // 1
	menu.agregarOpcion("Ver Encabezado.");           // 2
	menu.agregarOpcion("Ver Preguntas.");            // 3
	menu.agregarOpcion("Editar Encabezado.");        // 4
	menu.agregarOpcion("Editar Preguntas.");         // 5
	menu.agregarOpcion("Terminar.");                 // 6


	do {

		cout << menu;
		cin >> choice;

		switch (choice) {
		case 1: // Ver Examen
			cout << inst;
			break;
		case 2: // Ver Encabezado
			cout << inst.encabezado;
			break;
		case 3: // Ver Preguntas
			inst.preguntas.mostrarEtiquetaConColon();
			inst.preguntas.mostrarPreguntas();
			break;
		case 4: // Editar Encabezado
			cout << "----------------" << endl;
			cin >> inst.encabezado;
			break;
		case 5: // Editar Preguntas
			cout << "----------------" << endl;
			cin >> inst.preguntas;
			break;
		case 6:
			break;
		default:
			break;
		}
		cout << "----------------" << endl;
	} while (choice != 6);
	return in; 
}

ostream & operator<<(ostream & out, Examen & inst) {
	cout << inst.encabezado;
	cout << inst.preguntas;
	return out;
}