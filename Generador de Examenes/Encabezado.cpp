#include "Encabezado.h"

Encabezado::Encabezado() {
	ListaDeCadenas etiquetas;
	etiquetas.insertarAlFinal("Nombre");
	etiquetas.insertarAlFinal("ID");
	etiquetas.insertarAlFinal("Fecha");
	etiquetas.insertarAlFinal("Hora");
	this->etiquetas = etiquetas;
	MyDate fecha(10,25,2018);
	this->fecha = fecha;
	MyTime hora(-2,0,0);
	this->hora = hora;

}

Encabezado::Encabezado(ListaDeCadenas etiquetas, MyDate fecha, MyTime hora)
{
	this->etiquetas = etiquetas;
	this->fecha = fecha;
	this->hora = hora;
}

Encabezado::~Encabezado()
{
}

Encabezado::Encabezado(const Encabezado & inst)
{
	this->etiquetas = inst.etiquetas;
	this->fecha = inst.fecha;
	this->hora = inst.hora;
}

Encabezado & Encabezado::operator=(const Encabezado & inst)
{
	this->etiquetas = inst.etiquetas;
	this->hora = inst.hora;
	this->fecha = inst.fecha;
	return *this;

}

void Encabezado::setFecha(MyDate & fecha)
{
	this->fecha = fecha;
}

void Encabezado::setHora(MyTime & hora)
{
	this->hora = hora;
}

const MyDate & Encabezado::getFecha() const
{
	return this->fecha;
}

const MyTime & Encabezado::getHora() const
{
	return this->hora;
}

void Encabezado::mostrarHora() const
{
	cout << abs(this->hora.getHour()) << ":";
	if (this->hora.getMinutes() < 10) cout << "0";
	cout << this->hora.getMinutes() << ":";
	if (this->hora.getSeconds() < 10) cout << "0";
	cout << this->hora.getSeconds() << " ";
	if (this->hora.isAM())
		cout << "AM";
	else
		cout << "PM";
}

void Encabezado::agregarEtiqueta(int indice, MyString & unaCadena)
{
	this->etiquetas.insertar(indice, unaCadena);
}

void Encabezado::removerEtiqueta(int indice)
{
	if (indice >= 0 && indice < this->etiquetas.cantidadDeCadenas())
		this->etiquetas.remover(indice);
}

istream & operator>>(istream & in, Encabezado & inst)
{
	/* Opciones
	1. Crear encabezado desde cero.
	2. Agregar una etiqueta.
	3. Remover una etiqueta.
	4. Cambiar Fecha.
	5. Cambiar Hora.
	6. Salir.
	*/
	MyMenu menu("Menu Encabezado", "Seleccion:");
	MyString nueva;
	int choice, ind;

	menu.agregarOpcion("Ver encabezado.");           // 1
	menu.agregarOpcion("Agregar una etiqueta.");     // 2
	menu.agregarOpcion("Remover una etiqueta.");     // 3
	menu.agregarOpcion("Cambiar Fecha.");            // 4
	menu.agregarOpcion("Cambiar Hora.");             // 5
	menu.agregarOpcion("Terminar.");                 // 6


	do {
		
		cout << menu;
		cin >> choice;
	
		switch (choice) {
		case 1:
			cout << inst;
			break;
		case 2:
			cout << "Entre la etiqueta a agregar: ";
			cin >> nueva;
			cout << "Entre el indice del 1 al " << inst.etiquetas.cantidadDeCadenas()+1
				<< " donde la quiera agregar." << endl;
			cout << inst.etiquetas;
			cin >> ind;
			inst.agregarEtiqueta(ind-1, nueva);
			break;
		case 3:
			cout << "Seleccione el numero de la etiqueta que desea remover:" << endl;
			cout << inst.etiquetas;
			cin >> ind;
			inst.removerEtiqueta(ind - 1);
			break;
		case 4:
			inst.fecha.askDate();
			break;
		case 5:
			inst.hora.askTime();
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

// muestra el Encabezado completo
ostream & operator<<(ostream & out, Encabezado & inst)
{
	for (int i = 0; i < inst.etiquetas.cantidadDeCadenas(); i++) {
		cout << inst.etiquetas[i] << ": ";
		if (inst.etiquetas[i] == "Fecha" || inst.etiquetas[i] == "fecha")
			cout << inst.fecha;
		else if (inst.etiquetas[i] == "Hora" || inst.etiquetas[i] == "hora")
			// utilizando metodo de Encabezado para obtener el formato deseado
			inst.mostrarHora();
		else
			cout << "________________";
		// Para que quepan dos en una linea
		if (i%2 == 0) 
			cout << "\t\t";
		else 
			cout << "\n";
	}
	return out;
}
