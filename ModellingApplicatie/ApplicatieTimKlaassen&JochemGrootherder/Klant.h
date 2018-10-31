/*
 * Klant.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef KLANT_H_
#define KLANT_H_
#include <string>
#include <vector>
#include "Pas.h"
#include "Abonnement.h"
#include<iostream>

class Klant {
public:
	Klant(std::string naam, std::string adres, std::string woonplaats, std::string bankrekeningnummer);
	virtual ~Klant();

	void setInactief();
	const std::vector<Abonnement>& getAbonnementen() const;
	const std::string& getAdres() const;
	const std::string& getBankrekeningnummer() const;
	const std::string& getNaam() const;
	const std::string& getWoonplaats() const;

	void maakAbonnement(int beginDatum, int eindDatum, std::string type);

private:
	std::string naam;
	std::string adres;
	std::string woonplaats;
	std::string bankrekeningnummer;
	Pas pas;
	std::vector<Abonnement> abonnementen;
	bool inactief;
};


#endif /* KLANT_H_ */
