/*
* Dragon.cpp
*
*  Created on: Apr 23, 2018
*      Author: DELL
*/
//#include "stdafx.h"
#include "Dragon.h"

Dragon::Dragon() {
	// TODO Auto-generated constructor stub
	flamerange = 0;
}
Dragon::Dragon(const string comingName, int comingLevel, int comingHealth_status, int comingForce, int comingFlameRange, int comingPosition) :Creature(comingName, comingLevel, comingHealth_status, comingForce, comingPosition)
{
	flamerange = comingFlameRange;
}
void Dragon::Fly(int pos)
{
	Dragon::setPosition(pos);
}
void Dragon::BlowFlame(Creature& comingCreature)
{
	if (Dragon::alive() && comingCreature.alive())
	{
		if (abs(comingCreature.getPosition()-Dragon::getPosition()) <= flamerange)
		{
//			cout << " comingCreature.getPosition:" << comingCreature.getPosition()<<endl;
//			cout << " Dragon::getPosition:" << Dragon::getPosition() << endl;
//			cout << " flamerange:" << flamerange << endl;
//			cout << " Dragon::AttackPoints():" << Dragon::AttackPoints() << endl;
//			cout << " comingCreature.getHealthStatus():" << comingCreature.getHealthStatus() << endl;
			comingCreature.setHealthStatus(comingCreature.getHealthStatus() - Dragon::AttackPoints());
//			cout << " Dragon::AttackPoints():" << Dragon::AttackPoints() << endl;
//			cout << " comingCreature.getHealthStatus():" << comingCreature.getHealthStatus() << endl;
			Dragon::setHealthStatus(Dragon::getHealthStatus() - (abs(Dragon::getPosition() - comingCreature.getPosition())));
//			cout << " Dragon::getHealthStatus():" << Dragon::getHealthStatus() << endl;
		}
	}
	if (Dragon::alive() && !(comingCreature.alive()))
	{
		Dragon::setLevel(Dragon::getLevel() + 1);
	}
}
void Dragon::Display()
{
	cout << " name: " << Dragon::getName() << endl;
	cout << " level: " << Dragon::getLevel() << endl;
	cout << " health_status: " << Dragon::getHealthStatus() << endl;
	cout << " force: " << Dragon::getForce() << "\n";
	cout << "Attacking Points: " << Dragon::AttackPoints() << endl;
	cout << "position: " << Dragon::getPosition() << endl;
}
Dragon::~Dragon() {
	// TODO Auto-generated destructor stub
}

