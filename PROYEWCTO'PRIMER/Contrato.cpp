#include "Contrato.h"

Contrato::Contrato(int codigo, string descripcion, double salar) :codigoContrato(codigo), descripcionPuesto(descripcion), salario(salar) 
{
}

Contrato::~Contrato()
{
}

int Contrato::getCodigo()
{
	return codigoContrato;
}

string Contrato::getDescripcion()
{
	return descripcionPuesto;
}

double Contrato::getSalario()
{
	return salario;
}

void Contrato::setCodigo(int codi)
{
	codigoContrato = codi;
}

void Contrato::setdescripcion(string descripcion)
{
	descripcionPuesto = descripcion;
}

void Contrato::setsalario(double sala)
{
	salario = sala;
}

string Contrato::toString()
{
	stringstream s;

	s << "El codigo de contrato es: " << codigoContrato << endl;
	s << "La descripcion del puesto es: " << descripcionPuesto << endl;
	s << "El salario del puesto es de: " << salario << " colones." << endl;
		
	return s.str();
}



