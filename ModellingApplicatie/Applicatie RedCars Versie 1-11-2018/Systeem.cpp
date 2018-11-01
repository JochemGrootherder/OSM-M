/*
 * Systeem.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include "Systeem.h"
#include "klant.h"

Systeem::Systeem() {
	// TODO Auto-generated constructor stub

}

Systeem::~Systeem() {
	// TODO Auto-generated destructor stub
}

void Systeem::berekenKosten() {
}

void Systeem::getBeschikbareAutos() {
	for (Auto a : autoLijst) {
		if (!a.isGereserveerd()) {
			std::cout << "nummer: " << a.getNummer() << " type: " << a.getType()
					<< " kenteken: " << a.getKenteken() << std::endl;
		}
	}
}

void Systeem::getKlanten(){
	for(auto k : klantenLijst){
			std::cout << k.getNaam()<<std::endl;
		}
}

void Systeem::getAbonnementenPerKlant(){
	for(auto k : klantenLijst){
		std::cout<<__PRETTY_FUNCTION__<<std::endl;
		for(auto a : k.getReserveringen()){
			std::cout<<__PRETTY_FUNCTION__<<std::endl;std::cout << a.getBegintijd() << "  "<< a.getEindtijd() << std::endl;

			std::cout << "random shizzle in hizzle" << std::endl;
		}
	}
}

void Systeem::maakVoorbeeldPopulatie() {
	Auto a(1, "beste auto ter wereld AKA de ford fiesta uit 2004", "25-PK-NZ");
	Auto b(2, "2", "2");
	Auto c(3, "3", "3");
	Auto d(4, "4", "4");
	b.setGereserveerd();
	autoLijst.push_back(a);
	autoLijst.push_back(b);
	autoLijst.push_back(c);
	autoLijst.push_back(d);

	Klant klant1("Jochem", "kruisenkstraat 17", "Brummen", "123456789");
	Klant klant2("banaan", "kruisenkstraat 17", "Brummen", "123456789");
	klantenLijst.push_back(klant1);
	klantenLijst.push_back(klant2);

	klant1.maakAbonnement(20181031,20181101, "uur");


	klant1.maakAbonnement(20181031,20181101, "uur");


				std::cout << "random shizzle in hizzle" << std::endl;

}
