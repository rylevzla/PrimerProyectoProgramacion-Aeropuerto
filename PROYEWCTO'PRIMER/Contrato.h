#pragma once
#include <iostream>
#include <sstream>
using namespace std;


class Contrato {
protected:
	int codigoContrato;
	string descripcionPuesto;
	double salario;

public:

	Contrato(int codigo, string descripcion, double salar);


	virtual ~Contrato();
	

	int getCodigo();
	string getDescripcion();
	double getSalario();
	
	void setCodigo(int codi);
	void setdescripcion(string descripcion);
	void setsalario(double sala);

	string toString();


};