/*
 * Reservering.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef RESERVERING_H_
#define RESERVERING_H_
#include "klant.h"

class Reservering {
public:
	Reservering();
	virtual ~Reservering();

	void reserveerAuto(int begintijd, int eindtijd, const Abonnement& abonnement, int autoNummer);
private:
	int begintijd;
	int eindtijd;
	int pasnummer;
	Abonnement abonnement;
};

#endif /* RESERVERING_H_ */
