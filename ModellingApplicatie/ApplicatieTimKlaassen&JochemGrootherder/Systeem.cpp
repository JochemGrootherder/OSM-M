/*
 * Systeem.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include "Systeem.h"

Systeem::Systeem() {
	// TODO Auto-generated constructor stub

}

Systeem::~Systeem() {
	// TODO Auto-generated destructor stub
}

void Systeem::berekenKosten() {
}

void Systeem::getAutos() {
	for(Auto a : autoLijst){
		std::cout<<"nummer: "<< a.getNummer()<< " type: " << a.getType() << " kenteken: " << a.getKenteken() << std::endl;
	}
}
