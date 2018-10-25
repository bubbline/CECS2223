#include "..\Figura\Rectangulo.h"
#include "..\Figura\Circulo.h"


int main() {
	int operacion;
	Circulo c;
	Rectangulo r;

	do {
		cout << "Menu de Figuras" << endl
			<< "/t1. Area de un circulo" << endl
			<< "/t2. Area de un rectangulo" << endl
			<< "/t3. Salir" << endl
			<< "Seleccion: "; 
		cin >> operacion;
		switch (operacion) {
		case 1:
			cout << "***Circulo***" << endl;
			cin >> c;
			c.mostrarArea();
			break;
		case 2:
			r.pedirDimensiones();
			r.mostrarArea();
			break;
		case 3:
			cout << "Saliendo...";
			break;
		default:
			cout << "Por favor entre un numero valido" << endl;
		}
		cout << endl;
	} while (operacion != 3);

	return 0;
}

/*

programa
circulo -- es el class?
rectangulo
area




*/