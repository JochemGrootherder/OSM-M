/*
 * Gps.h
 *
 *  Created on: 30 okt. 2018
 *      Author: Jochem
 */

#ifndef GPS_H_
#define GPS_H_

class Gps {
public:
	Gps();
	virtual ~Gps();

	void scanPas();
	void getCoordinaten();
private:
	int xCoordinaat;
	int yCoordinaat;
};

#endif /* GPS_H_ */
