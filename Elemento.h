#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace System::Drawing;

class Elemento
{
private:
	int numero;
	int posx;
	int posy;// retrocede de 32 en 32
	int order;
public:
	Elemento(int numero=0,int posx=0,int posy=0,int order =0):numero(numero),posx(posx),posy(posy),order(order) {};
	//Lo que he hecho aqui es parte de structuras. Basicamente me salteo algunas partes... no mas sobrecargas de construcctores
	~Elemento() {}
	int getNumero() { return numero; }
	int getPosx() { return posx; }
	int getPosy() { return posy; }
	int getOrder() { return order; }
	void dibujarNumero(Graphics^ g) {
		System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Times new roman", 16);
		g->DrawString(Convert::ToString(numero) , fuente, Brushes::Black, posx, posy);
	}
};

