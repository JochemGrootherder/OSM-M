/*
 * Abonnement.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef ABONNEMENT_H_
#define ABONNEMENT_H_
#include<string>

class Abonnement {
public:
	Abonnement(int beginDatum, int eindDatum, std::string type);
	virtual ~Abonnement();
	int getBeginDatum() const;
	int getEindDatum() const;
	const std::string& getType() const;

private:
	int beginDatum;
	int eindDatum;
	std::string type;
};

#endif /* ABONNEMENT_H_ */
