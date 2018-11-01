/*
 * Reservering.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef RESERVERING_H_
#define RESERVERING_H_
#include "klant.h"
#include <vector>
#include "Abonnement.h"

class Klant;
class Reservering {
public:
	Reservering(int begintijd, int eindtijd, int autoNummer, Klant klant);
	virtual ~Reservering();
	int getBegintijd();
	int getEindtijd();

	//void reserveerAuto(int begintijd, int eindtijd, int autoNummer, std::string typeAbonnement);
private:
	int begintijd;
	int eindtijd;
	int autoNummer;
	std::string typeAbonnement;
	Abonnement abonnement;
};

#endif /* RESERVERING_H_ */
