/*
 * main.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include <iostream>
#include "auto.h"
#include "systeem.h"
#include<vector>

bool debug  = "true";

int main(int argc, char **argv) {
	if(debug){std::cout << "call systeem" << std::endl;}

	Systeem systeem;

	if(debug){std::cout << "call voorbeeld populatie" << std::endl;}

	systeem.maakVoorbeeldPopulatie();

	if(debug){std::cout << "call get klanten" << std::endl;}

	systeem.getKlanten();

	if(debug){std::cout << "call beschikbare autos" << std::endl;}

	systeem.getBeschikbareAutos();

	if(debug){std::cout << "call abonnementen" << std::endl;}

	systeem.getAbonnementenPerKlant();
}



