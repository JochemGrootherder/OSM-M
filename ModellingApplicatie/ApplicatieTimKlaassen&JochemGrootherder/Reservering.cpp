/*
 * Reservering.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include "Reservering.h"

Reservering::Reservering() {
	// TODO Auto-generated constructor stub

}

Reservering::~Reservering() {
	// TODO Auto-generated destructor stub
}

void Reservering::reserveerAuto(int begintijd, int eindtijd, int autoNummer,
		std::string typeAbonnement) :
		begintijd(begintijd), eindtijd(eindtijd), autoNummer(autoNummer), typeAbonnement(
				typeAbonnement) {

}

