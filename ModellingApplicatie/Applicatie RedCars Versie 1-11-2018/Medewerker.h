	/*
 * Medewerker.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef MEDEWERKER_H_
#define MEDEWERKER_H_
#include "Klant.h"

class Medewerker {
public:
	Medewerker();
	virtual ~Medewerker();

	void maakKlantInactief(Klant klant);
};

#endif /* MEDEWERKER_H_ */
