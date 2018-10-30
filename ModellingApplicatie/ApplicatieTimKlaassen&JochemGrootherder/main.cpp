/*
 * main.cpp
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#include <iostream>
#include "auto.h"
#include "systeem.h"
#include<vector>

int main(int argc, char **argv) {
	Systeem systeem;
	Auto a(1, "1","1");

	Auto b(2, "2","2");

	Auto c(3, "3","3");

	Auto d(4, "4","4");

	systeem.autoLijst.push_back(a);
	systeem.autoLijst.push_back(b);
	systeem.autoLijst.push_back(c);
	systeem.autoLijst.push_back(d);
	systeem.getAutos();

}



