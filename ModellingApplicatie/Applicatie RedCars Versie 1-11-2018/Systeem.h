/*
 * Systeem.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef SYSTEEM_H_
#define SYSTEEM_H_
#include <vector>
#include<algorithm>
#include<iostream>
#include "auto.h"
#include "klant.h"

class Systeem {
public:
	Systeem();
	virtual ~Systeem();

	void berekenKosten();
	void getBeschikbareAutos();
	void getKlanten();
	void getAbonnementenPerKlant();

	void maakVoorbeeldPopulatie();
private:
	std::vector<Auto> autoLijst;
	std::vector<Klant> klantenLijst;
};

#endif /* SYSTEEM_H_ */
