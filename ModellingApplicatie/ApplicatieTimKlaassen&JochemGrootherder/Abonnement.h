/*
 * Abonnement.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef ABONNEMENT_H_
#define ABONNEMENT_H_

class Abonnement {
public:
	Abonnement();
	virtual ~Abonnement();

private:
	int beginDatum;
	int eindDatum;
	int type;
};

#endif /* ABONNEMENT_H_ */
