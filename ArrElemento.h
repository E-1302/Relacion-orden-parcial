#pragma once
#include "Elemento.h"
using namespace std;

class ArrElemento
{
private:
	vector <Elemento*>* arrE;
public:
	ArrElemento() {
		arrE = new vector <Elemento*>();
	}
	~ArrElemento() {}
	void agregarElemento(Elemento* e) { arrE->push_back(e); }
	void Dibujar(Graphics^ g) {
		Pen^ lapiz = gcnew Pen(Color::LightBlue, 1);

		for (int i = 0; i < arrE->size(); i++) {

			for (int j = 0; j < i; j++) {
				if (arrE->at(i)->getOrder() == arrE->at(j)->getOrder() + 1 && arrE->at(i)->getNumero()% arrE->at(j)->getNumero()==0) {
					//dibujando la linea
					g->DrawLine(
						lapiz,
						Point(arrE->at(j)->getPosx()+8, arrE->at(j)->getPosy()+8), 
						Point(arrE->at(i)->getPosx()+8, arrE->at(i)->getPosy()+8)
					);
				}
			}
			arrE->at(i)->dibujarNumero(g);
		}
	}
};
