#include "Preguntas.h"

Preguntas::Preguntas(MyString etiqueta)
{
	this->etiqueta = etiqueta;
	ListaDeCadenas lista;
	this->preguntas = lista;
}

Preguntas::Preguntas(const Preguntas & inst)
{
	(*this) = inst;
}

Preguntas::~Preguntas()
{
}

Preguntas & Preguntas::operator=(const Preguntas & inst)
{
	this->etiqueta = inst.etiqueta;
	this->preguntas = inst.preguntas;

	return (*this);
}

void Preguntas::setEtiqueta(const MyString & cadena)
{
	this->etiqueta = cadena;
}

void Preguntas::setEtiqueta(const char * cadena)
{
	this->etiqueta = cadena;
}

const MyString & Preguntas::getEtiqueta() const
{
	return this->etiqueta;
}

void Preguntas::agregarPregunta(int indice, const MyString & cadena)
{
	this->preguntas.insertar(indice, cadena);
}

void Preguntas::agregarPregunta(int indice, const char * cadena)
{
	this->preguntas.insertar(indice, cadena);
}

void Preguntas::removerPregunta(int indice)
{
	this->preguntas.remover(indice);
}

void Preguntas::mostrarEtiqueta() const
{
	cout << this->etiqueta << endl;
}

void Preguntas::mostrarEtiquetaConColon() const
{
	cout << this->etiqueta << ":" << endl;
}

void Preguntas::mostrarPreguntas() const
{
	for (int i = 0; i < this->preguntas.cantidadDeCadenas(); i++)
		cout << i+1 << ". " << this->preguntas[i] << endl;

}

istream & operator>>(istream & in, Preguntas & inst)
{
	/* Opciones
	1. Crear encabezado desde cero.
	2. Agregar una etiqueta.
	3. Remover una etiqueta.
	4. Cambiar Fecha.
	5. Cambiar Hora.
	6. Salir.
	*/
	MyMenu menu("Menu Preguntas", "Seleccion:");
	MyString nueva;
	int choice, ind;

	menu.agregarOpcion("Ver etiqueta.");             // 1
	menu.agregarOpcion("Ver preguntas.");            // 2
	menu.agregarOpcion("Cambiar etiqueta.");         // 3
	menu.agregarOpcion("Agregar Pregunta.");         // 4
	menu.agregarOpcion("Cambiar Pregunta.");         // 5
	menu.agregarOpcion("Remover Pregunta.");         // 6
	menu.agregarOpcion("Terminar.");                 // 7


	do {

		cout << menu;
		cin >> choice;

		switch (choice) {
		case 1: // Ver Etiqueta
			inst.mostrarEtiqueta();
			break;
		case 2: // Ver Preguntas
			inst.mostrarPreguntas();
			break;
		case 3: // Cambiar etiqueta
			cout << "Entre la etiqueta nueva: ";
			cin >> nueva;
			inst.setEtiqueta(nueva);
			break;
		case 4: // Agregar pregunta
			cout << "Entre la pregunta a agregar: ";
			cin >> nueva;
			if (inst.preguntas.cantidadDeCadenas() > 0) {
				cout << "Entre el indice del 1 al " << inst.preguntas.cantidadDeCadenas() + 1
					<< " donde la quiera agregar." << endl;
				cout << inst.preguntas;
				cin >> ind;
			}
			else ind = 1;
			inst.agregarPregunta(ind - 1, nueva);
			break;
		case 5: // Cambiar pregunta
			if (inst.preguntas.cantidadDeCadenas() > 0) {
				cout << "Entre la pregunta a agregar: ";
				cin >> nueva;
				cout << "Entre el indice del 1 al " << inst.preguntas.cantidadDeCadenas()
					<< " donde la quiera reemplazar." << endl;
				cout << inst.preguntas;
				cin >> ind;
				inst.removerPregunta(ind - 1);
				inst.agregarPregunta(ind - 1, nueva);
			}
			else cout << "No hay preguntas para reemplazar.";
			break;
		case 6: // Remover pregunta
			if (inst.preguntas.cantidadDeCadenas() > 0) {
				cout << "Seleccione el numero de la pregunta que desea remover:" << endl;
				inst.mostrarPreguntas();
				cin >> ind;
				inst.removerPregunta(ind - 1);
			}
			else cout << "No hay preguntas para remover.";
			break;
		case 7:
			break;
		default:
			break;
		}
		cout << "----------------" << endl;
	} while (choice != 7);

	return in;
}

ostream & operator<<(ostream & out, Preguntas & inst) {
	cout << inst.etiqueta << ":" << endl;
	for (int i = 0; i < inst.preguntas.cantidadDeCadenas(); i++) {
		cout << i + 1 << ". " << inst.preguntas[i] << endl;
		// Espacios para contestar
		cout << "\n\n\n\n\n\n"; 
	}
	return out;
}