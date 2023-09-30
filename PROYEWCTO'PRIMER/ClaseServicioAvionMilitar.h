#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class ServicioAvionMilitar {

public:

	static string avion(string codigo) {

		if (codigo == "M300") { return "AIRBUS 300-600";}
		if (codigo == "M130") { return "ANTONOV"; }

	}

	static double avionCarga(string codigo) {

		if (codigo == "M300") {return 1400;}
		if (codigo == "M130") { return 1300; }

	}

	static int avionPasajeros(string codigo) {

		if (codigo == "M300") {	return 0;}
		if (codigo == "M130") { return 0;}

	}

	static bool equipoMilitar(string codigo) {

		if (codigo == "M300") {
			return true;
		}
		if (codigo == "M130") { return true; }

	}

	static double avionAlcance(string codigo) {

		if (codigo == "M300") {
			return 4630,0;
		}
		if (codigo == "M130") { return 4000,0; }

	}


};