/*
 * Klant.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include "Klant.h"

Klant::Klant(std::string naam, std::string adres, std::string woonplaats, std::string bankrekeningnummer) :
	naam(naam), adres(adres), woonplaats(woonplaats), bankrekeningnummer(bankrekeningnummer), inactief(false)
{
	// TODO Auto-generated constructor stub
	Pas pas;
}

Klant::~Klant() {
	// TODO Auto-generated destructor stub
}

void Klant::setInactief() {
	inactief = true;
}


//const std::vector<Abonnement>& Klant::getAbonnementen() const {
////	for (auto a : abonnementen){
////		std::cout << a.getBeginDatum() << "  "<< a.getEindDatum() << "   " << a.getType() << std::endl;
////	}
//	return abonnementen;
//}

const std::string& Klant::getAdres() const {
	return adres;
}

const std::string& Klant::getBankrekeningnummer() const {
	return bankrekeningnummer;
}

const std::string& Klant::getNaam() const {
	return naam;
}

const std::string& Klant::getWoonplaats() const {
	return woonplaats;
}

const std::vector<Reservering>& Klant::getReserveringen() const
{
	return Reserveringen;
}
//void Klant::maakAbonnement(int beginDatum, int eindDatum, std::string type) {
//	//std::cout<<__PRETTY_FUNCTION__<<std::endl;
//	std::cout<< beginDatum <<" " << eindDatum << " " << type << std::endl;
//	Abonnement abonnement(beginDatum, eindDatum, type);
//	abonnementen.push_back(abonnement);
//}

