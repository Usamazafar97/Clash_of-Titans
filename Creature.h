/*
* Creature.h
*
*  Created on: Apr 23, 2018
*      Author: DELL
*/

#ifndef CREATURE_H_
#define CREATURE_H_
#include <cstring>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;
class Creature {
	const string name;
	int level;
	int health_status;
	int force;
	int position;
public:
	Creature();
	Creature(const string, int, int, int, int);
	bool alive();
	void Move(int);
	void GoodBye();
	void Weak(int);
	virtual void Display();
	int AttackPoints();
	virtual ~Creature();
	int getForce() const;
	void setForce(int force);
	int getHealthStatus() const;
	void setHealthStatus(int healthStatus);
	int getLevel() const;
	void setLevel(int level);
	const string& getName() const;
	int getPosition() const;
	void setPosition(int position);
};

#endif /* CREATURE_H_ */

