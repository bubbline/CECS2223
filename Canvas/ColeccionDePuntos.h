#pragma once
class ColeccionDePuntos
{
private:
	Punto * Punto;
	int cantidad;
public:
	ColeccionDePuntos();
	~ColeccionDePuntos();
	ColeccionDePuntos(const ColeccionDePuntos & inst);
	ColeccionDePuntos & operator=(const ColeccionDePuntos & inst);

	const Punto & operator[](int indice) const;
	Punto & operator[](int indice);

	ColeccionDePuntos & operator+(const punto & unPunto);
	int cantidadDePuntos() const;
	bool estaVacia() const;
	void vaciar();
};

