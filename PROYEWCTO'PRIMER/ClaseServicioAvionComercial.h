#pragma once
#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class ServicioAvionMilitar {

public:

	static string avion(string codigo) {

		if (codigo == "310") { return "AIRBUS A310"; }
		if (codigo == "747") { return "Boeing 747"; }
		if (codigo == "767") { return "Boeing 767"; }
		if (codigo == "777") { return "Boeing 777"; }
		if (codigo == "130") { return "Concorde"; }
		if (codigo == "850") { return "DC-8-50"; }

	}


	static int avionPasajeros(string codigo) {
		if (codigo == "310") { return 250; }
		if (codigo == "747") { return 470; }
		if (codigo == "767") { return 250; }
		if (codigo == "777") { return 375; }
		if (codigo == "130") { return 130; }
		if (codigo == "850") { return 145; }

	}

	

	static double avionRango(string codigo) {
		if (codigo == "310") { return 8300,0; }
		if (codigo == "747") { return 6700,0; }
		if (codigo == "767") { return 12300,0; }
		if (codigo == "777") { return 7450,0; }
		if (codigo == "130") { return 6400,0; }
		if (codigo == "850") { return 14000,0; }

	}
	static double avionVelocidad(string codigo) {
		if (codigo == "310") { return 895,0; }
		if (codigo == "747") { return 980,0; }
		if (codigo == "767") { return 885,0; }
		if (codigo == "777") { return 980,0; }
		if (codigo == "130") { return 2200,0; }
		if (codigo == "850") { return 875,0; }

	}
	static int avionPrecioMillones(string codigo) {
		if (codigo == "310") { return 120; }
		if (codigo == "747") { return 200; }
		if (codigo == "767") { return 120; }
		if (codigo == "777") { return 180; }
		if (codigo == "130") { return 350; }
		if (codigo == "850") { return 80; }

	}
};