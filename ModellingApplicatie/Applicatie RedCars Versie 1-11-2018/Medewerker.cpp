/*
 * Medewerker.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include "Medewerker.h"

Medewerker::Medewerker() {
	// TODO Auto-generated constructor stub

}

Medewerker::~Medewerker() {
	// TODO Auto-generated destructor stub
}

void Medewerker::maakKlantInactief(Klant klant) {
	klant.setInactief();
}
