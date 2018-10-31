/*
 * Auto.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef AUTO_H_
#define AUTO_H_
#include <string>
#include "Gps.h"

class Auto {
public:
	Auto(int nummer, std::string type, std::string kenteken);
	virtual ~Auto();

	void setNummer(int nieuwNummer);
	void setType(std::string nieuwType);
	void setKenteken(std::string nieuwKenteken);
	void setGereserveerd();

	void koppelPas();
	void ontgrendel();
	bool isGereserveerd() const;
	const std::string& getKenteken() const;
	int getNummer() const;
	const std::string& getType() const;

	Gps gps;

private:
	int nummer;
	std::string type;
	std::string kenteken;
	bool gereserveerd;
	bool vergrendeld;
};

#endif /* AUTO_H_ */
