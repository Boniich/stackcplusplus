#include "PilaArray.h"
#include <iostream>
#include <algorithm>
using namespace std;
typedef int TipoDeDato;


void PilaArray::insertar(TipoDeDato elemento) {
	if (pilaLlena()) {
		throw "Desbordamiento de pila";
	}
	cima++;
	listaPila[cima] = elemento;
}

TipoDeDato PilaArray::quitar() {
	TipoDeDato aux;
	if (pilaVacia()) {
		throw "Pila vacia, no se puede extraer";
	}
	aux = listaPila[cima];
	cima--;
	return aux;
}

TipoDeDato PilaArray::cimaPila() {
	if (pilaVacia()) {
		throw "Pila vacia, no hay elementos";
	}

	return listaPila[cima];
}

bool PilaArray::pilaVacia() {
	return cima == -1; // si se cumple la condicion, la pila esta vacia y devuelve true
}

bool PilaArray::pilaLlena() {
	return cima == TAMPILLA - 1;
}

void PilaArray::limpiarPila() {
	cima = -1;
}

void PilaArray::imprimirPila() {

	for (int x = cima; x >= 0; x--) {
	cout << listaPila[x] << " ";
	}

}

TipoDeDato PilaArray::getCima() {
	return cima;
}