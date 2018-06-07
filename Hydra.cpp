/*
* Hydra.cpp
*
*  Created on: Apr 23, 2018
*      Author: DELL
*/
//#include "stdafx.h"
#include "Hydra.h"

Hydra::Hydra() {
	// TODO Auto-generated constructor stub
	necklength = 0;
	poisondose = 0;
}
Hydra::Hydra(const string comingName, int comingLevel, int comingHealth_status, int comingForce, int comingNecklength, int comingPoisondose, int comingPosition) :Creature(comingName, comingLevel, comingHealth_status, comingForce, comingPosition) {
	necklength = comingNecklength;
	poisondose = comingPoisondose;
}
void Hydra::InjectPoison(Creature& comingCreature)
{
	if (Hydra::alive() && comingCreature.alive())
	{
		if (abs(comingCreature.getPosition() - Hydra::getPosition()) <= necklength)
		{
//			cout << " comingCreature.getPosition:" << comingCreature.getPosition() << endl;
//			cout << " Dragon::getPosition:" << Hydra::getPosition() << endl;
//			cout << " flamerange:" << necklength << endl;
//			cout << " Dragon::AttackPoints():" << Hydra::AttackPoints() << endl;
//			cout << " comingCreature.getHealthStatus():" << comingCreature.getHealthStatus() << endl;
			comingCreature.setHealthStatus(comingCreature.getHealthStatus() - (Hydra::AttackPoints() + poisondose));
//			cout << " Dragon::AttackPoints():" << Hydra::AttackPoints() << endl;
//			cout << " comingCreature.getHealthStatus():" << comingCreature.getHealthStatus() << endl;
		}
	}
	if (Hydra::alive() && !(comingCreature.alive()))
	{
		Hydra::setLevel(Hydra::getLevel() + 1);
	}
}
void Hydra::Display()
{
	cout << " name: " << Hydra::getName() << endl;
	cout << " level: " << Hydra::getLevel() << endl;
	if (Hydra::getHealthStatus()<0)
	{
		Hydra::setHealthStatus(0);
		cout << " health_status: " << Hydra::getHealthStatus() << endl;
	}
	else
		cout << " health_status: " << Hydra::getHealthStatus() << endl;
	cout << " force: " << Hydra::getForce() << "\n";
	cout << "Attacking Points: " << Hydra::AttackPoints() << endl;
	cout << "position: " << Hydra::getPosition() << endl;
}
Hydra::~Hydra() {
	// TODO Auto-generated destructor stub
}

