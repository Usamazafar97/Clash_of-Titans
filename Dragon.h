/*
* Dragon.h
*
*  Created on: Apr 23, 2018
*      Author: DELL
*/

#ifndef DRAGON_H_
#define DRAGON_H_
#include "Creature.h"
#include <cmath>
class Dragon :public Creature {
	int flamerange;
public:
	Dragon();
	Dragon(const string, int, int, int, int, int = 0);
	void Fly(int pos);
	void BlowFlame(Creature&);
	void Display();
	virtual ~Dragon();
};

#endif /* DRAGON_H_ */
