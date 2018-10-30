/*
 * Klant.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef KLANT_H_
#define KLANT_H_
#include <string>
#include "Pas.h"
#include "Abonnement.h"

class Klant {
public:
	Klant();
	virtual ~Klant();

	void setInactief();

private:
	std::string naam;
	std::string adres;
	std::string woonplaats;
	std::string bankrekeningnummer;
	Pas pas;
	Abonnement abonnement;
	bool inactief;
};

#endif /* KLANT_H_ */
