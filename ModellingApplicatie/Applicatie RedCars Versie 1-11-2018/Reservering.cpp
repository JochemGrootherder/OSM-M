/*
 * Reservering.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */
#include "Klant.h"
#include "Reservering.h"
#include "Abonnement.h"

Reservering::Reservering(int begintijd, int eindtijd, int autoNummer, Klant klant)
:begintijd(begintijd), eindtijd(eindtijd), autoNummer(autoNummer) {
	// when a Reservatin is made add it to the klant.reserveringen vector-- Or do we only add a reference??? The latter.
	klant.Reserveringen.push_back(Reservering);
}

Reservering::~Reservering() {
	// TODO Auto-generated destructor stub
}

int Reservering::getBegintijd()
{
	return begintijd;
}

int Reservering::getEindtijd()
{
	return eindtijd;
}
//void Reservering::reserveerAuto(int begintijd, int eindtijd, int autoNummer,
//		std::string typeAbonnement) :
//		begintijd(begintijd), eindtijd(eindtijd), autoNummer(autoNummer), typeAbonnement(
//				typeAbonnement) {
//
//}



