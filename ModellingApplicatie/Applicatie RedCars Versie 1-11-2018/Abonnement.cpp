/*
 * Abonnement.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include "Abonnement.h"

Abonnement::Abonnement(int beginDatum, int eindDatum, std::string type) :
	beginDatum(beginDatum), eindDatum(eindDatum), type(type)
{
	// TODO Auto-generated constructor stub

}

Abonnement::~Abonnement() {
	// TODO Auto-generated destructor stub
}

int Abonnement::getBeginDatum() const {
	return beginDatum;
}

int Abonnement::getEindDatum() const {
	return eindDatum;
}

const std::string& Abonnement::getType() const {
	return type;
}
