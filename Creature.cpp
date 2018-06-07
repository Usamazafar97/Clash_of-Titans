/*
* Creature.cpp
*
*  Created on: Apr 23, 2018
*      Author: DELL
*/
//#include "stdafx.h"
#include "Creature.h"

Creature::Creature() :name("") {
	// TODO Auto-generated constructor stub
	level = 0;
	health_status = 0;
	force = 0;
	position = 0;
}
Creature::Creature(const string comingName, int comingLevel, int comingHealth_status, int comingForce, int comingPosition = 0) :name(comingName) {

	level = comingLevel;
	health_status = comingHealth_status;
	force = comingForce;
	position = comingPosition;
}
bool Creature::alive()
{
	if (health_status>0)
		return true;
	else
		return false;

}
int Creature::AttackPoints()
{
	if (alive())
	{
		return level*force;
	}
	else
	{
		return 0;
	}
}
void Creature::Move(int comingInt)
{
	position += comingInt;
}
void Creature::GoodBye()
{
	cout << "English: " << name << "is no more!";
}
void Creature::Weak(int points)
{
	if (alive())
	{
		health_status -= points;
	}
	else
	{
		health_status = 0;
		GoodBye();
	}
}
 void  Creature::Display()
{
	cout << " name: " << name << endl;
	cout << " level: " << level << endl;
	cout << " health_status: " << health_status << endl;
	cout << " force: " << force << "\n";
	cout << "Attacking Points: " << AttackPoints() << endl;
	cout << "position: " << position << endl;
}
Creature::~Creature() {
	// TODO Auto-generated destructor stub
}

int Creature::getForce() const {
	return force;
}

void Creature::setForce(int force) {
	this->force = force;
}

int Creature::getHealthStatus() const {
	return health_status;
}

void Creature::setHealthStatus(int healthStatus) {
	health_status = healthStatus;
}

int Creature::getLevel() const {
	return level;
}

void Creature::setLevel(int level) {
	this->level = level;
}

const string& Creature::getName() const {
	return name;
}

int Creature::getPosition() const {
	return position;
}

void Creature::setPosition(int position) {
	this->position = position;
}
