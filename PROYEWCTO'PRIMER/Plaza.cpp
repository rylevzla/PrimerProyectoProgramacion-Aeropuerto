#include "Plaza.h"

Plaza::Plaza(string codPlaz, string nomPuesto)
{
}

Plaza::~Plaza()
{
}

string Plaza::getCodPlaza()
{
	return codigoPlaza;
}

string Plaza::getNombrePuesto()
{
	return nombrePuesto;
}

void Plaza::setCodPlaza(string cod)
{
	codigoPlaza = cod;
}

void Plaza::setNombrePuesto(string nom)
{
	nombrePuesto = nom;
}
