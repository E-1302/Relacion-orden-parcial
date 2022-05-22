#include "Divisores.h"

CDivisores::CDivisores()
{
	n.clear();
}

CDivisores::~CDivisores() {}

double CDivisores::getn(short i) { return n.at(i); }

void CDivisores::setn(int i)
{
	this->n.push_back(i);
}

