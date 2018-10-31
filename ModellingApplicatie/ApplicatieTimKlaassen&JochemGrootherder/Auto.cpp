/*
 * Auto.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include "Auto.h"

Auto::Auto(int nummer, std::string type, std::string kenteken) :
	nummer(nummer), type(type), kenteken(kenteken), gereserveerd(false), vergrendeld(true)
{
	// TODO Auto-generated constructor stub

}

Auto::~Auto() {
	// TODO Auto-generated destructor stub
}

void Auto::setNummer(int nieuwNummer) {
	nummer = nieuwNummer;
}

void Auto::setType(std::string nieuweType) {
	type = nieuweType;
}

void Auto::setKenteken(std::string nieuweKenteken) {
	kenteken = nieuweKenteken;
}

void Auto::setGereserveerd() {
	if(gereserveerd){
		gereserveerd = false;
	}else{
		gereserveerd = true;
	}
}

void Auto::koppelPas() {
}

void Auto::ontgrendel() {
	if(vergrendeld){
		vergrendeld = false;
	}
}

bool Auto::isGereserveerd() const {
	return gereserveerd;
}

const std::string& Auto::getKenteken() const {
	return kenteken;
}

int Auto::getNummer() const {
	return nummer;
}

const std::string& Auto::getType() const {
	return type;
}
