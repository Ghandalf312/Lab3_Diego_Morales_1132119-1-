#pragma once
#include "NodoCarta.h"
#include "Carta.h"
class Pila
{
private://Van a servir internamente en la pila
	NodoCarta* Head = nullptr;//Inicializar los punteros en nulo
public:
	int NElementos = 0;
	void Apilar(Carta valor); //Recibe carta para ingresar a la pila
	Carta Desapilar();//Sacar carta de la pila
	Carta ObtenerCima();//Obtener carta en la cima sin sacarla
	Pila();
	~Pila();
};

