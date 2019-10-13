#pragma once
#include "Carta.h"
class NodoCarta
{
public:
	NodoCarta();
	~NodoCarta();
public:
	NodoCarta* Siguiente;
	Carta valor;
};

