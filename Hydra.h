/*
* Hydra.h
*
*  Created on: Apr 23, 2018
*      Author: DELL
*/

#ifndef HYDRA_H_
#define HYDRA_H_
#include "Creature.h"
#include <cmath>
class Hydra :public Creature {
	int necklength;
	int poisondose;
public:
	Hydra();
	Hydra(const string, int, int, int, int, int, int = 0);
	void InjectPoison(Creature&);
	void Display();
	virtual ~Hydra();
};

#endif /* HYDRA_H_ */
