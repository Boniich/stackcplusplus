#pragma once
typedef int TipoDeDato;

const int TAMPILLA = 49;

class PilaArray {
private:
	int cima;
	TipoDeDato listaPila[TAMPILLA];
public:
	PilaArray() {
		cima = -1;
	};
	void insertar(TipoDeDato elemento);
	TipoDeDato quitar();
	void limpiarPila();
	TipoDeDato cimaPila();
	bool pilaVacia();
	bool pilaLlena();
	void imprimirPila();
	TipoDeDato getCima();
};