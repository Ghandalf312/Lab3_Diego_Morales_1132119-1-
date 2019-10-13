#include "Pila.h"
Pila::Pila() {
	NElementos = 0;
}
Pila::~Pila() {

}
void Pila::Apilar(Carta valor) {
	NodoCarta* NodoNuevo = new NodoCarta();
	NodoNuevo->valor = valor;//Asginar la carta al nodo
	if (Head == nullptr) {
		Head = NodoNuevo;
	}
	else {
		NodoCarta* Aux = new NodoCarta();
		Aux = Head; //Guarda el que era la cima anterior, que sera el siguiente del nuevo head
		Head = NodoNuevo; //La cima es el nuevo nodo
		Head->Siguiente = Aux;//Hacemos que auxliar sea el siguiente del head
	}
	NElementos++;//Aumenta la cantidad de elementos
}
Carta Pila::Desapilar() {//Ya no se volvera a utilizar el elemento, se desligan, reapunta a una cosa
	if (Head == nullptr)
	{
		return *new Carta();
	}
	else {
		Carta valor = Head->valor;
		Head = Head->Siguiente;
		NElementos--;
		return valor;
	}
}
Carta Pila::ObtenerCima() {
	if (Head == nullptr) {
		return *new Carta;
	}
	else {
		return Head->valor;
	}
}