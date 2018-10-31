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

int main(int argc, char **argv) {
	Systeem systeem;
	systeem.maakVoorbeeldPopulatie();
	systeem.getKlanten();
	systeem.getBeschikbareAutos();
	systeem.getAbonnementenPerKlant();
}



