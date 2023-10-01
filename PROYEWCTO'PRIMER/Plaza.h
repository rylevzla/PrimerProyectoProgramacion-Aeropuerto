#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class  Plaza {
private:
	string codigoPlaza;
	string nombrePuesto;
public:

	Plaza(string codPlaz, string nomPuesto);

	virtual ~Plaza();

	string getCodPlaza();

	string getNombrePuesto();

	void setCodPlaza(string cod);

	void setNombrePuesto(string nom);




};