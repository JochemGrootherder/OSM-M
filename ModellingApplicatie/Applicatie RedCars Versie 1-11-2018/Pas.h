/*
 * Pas.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef PAS_H_
#define PAS_H_

class Pas {
public:
	Pas();
	virtual ~Pas();
	int getPasnummer() const;

private:
	int pasnummer;
};

#endif /* PAS_H_ */
