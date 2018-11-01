/*
 * Paal.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef PAAL_H_
#define PAAL_H_

#include<vector>
#include<string>
#include "auto.h"

class Paal {
public:
	Paal();
	virtual ~Paal();

	void scanPas();
	void checkAuto();
private:
	int nummer;
	int aantalPlekken;
	std::vector<Auto> autos;
	std::string plaats;
};

#endif /* PAAL_H_ */
