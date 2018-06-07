//#include "stdafx.h"
//============================================================================
// Name        : Clash of Titans .cpp
// Author      : Usama Zafar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <cmath>
#include <iostream>
#include <conio.h>
#include "Creature.h"
#include "Dragon.h"
#include "Hydra.h"
using namespace std;
#include "Creature.h"
int distance(int x, int y)
{
	return abs(x - y);
}
void Fight(Dragon& dragonObject, Hydra& hydraObject)
{
	dragonObject.BlowFlame(hydraObject);
	hydraObject.InjectPoison(dragonObject);
}
int main() {
	Dragon dragon("Dragon red", 2, 10, 3, 20);
	Hydra  hydra("Hydra evil", 2, 10, 1, 10, 1, 42);
	dragon.Display();
	cout << "is preparing for fight with :" << endl;
	hydra.Display();
	cout << endl;
	cout << "1st Fight :" << endl;
	cout << "    the creatures are not within range, so can not Attacke."
		<< endl;
	Fight(dragon, hydra);
	cout << "After the Fight :" << endl;
	dragon.Display();
	hydra.Display();
	cout << endl;
	cout << "Dragon has flown close to Hydra :" << endl;
	dragon.Fly(hydra.getPosition() - 1);
	dragon.Display();
	cout << endl;
	cout << "Hydra moves :" << endl;
	hydra.Move(1);
	hydra.Display();
	cout << endl;
	cout << "2nd Fight :" << endl;
	cout << ""
		<< "+ Hydra inflicts a 3-point attack on dragon\n"
		" [ level (2) * force (1) + poison (1) = 3 ] ;\n"
		"+ Dragon inflicts a 6-point attack on Hydra\n"
		"[ level (2) * force (3) = 6 ] ;\n"
		"+ during his attack, dragon loses two additional points\n"
		"      [ corresponding to the distance between dragon and hydra : 43 - 41 = 2 ]." << endl;
	Fight(dragon, hydra);
	cout << "After the Fight :" << endl;
	dragon.Display();
	hydra.Display();
	cout << endl;
	cout << "Dragon moves by one step " << endl;
	dragon.Move(1);
	dragon.Display();
	cout << endl;
	cout << "3rd Fight :" << endl;
	cout << "  + Hydra inflicts a 3-point attack on dragon \n "
		"    [ level (2) * force (1) + poison (1) = 3 ] ; \n "
		"+ Dragon inflicts a 6-point attack on Hydra \n "
		"      [ level (2) * force (3) = 6 ] ; \n"
		"+ during his attack, dragon lost 1 additional life point.\n"
		"[ corresponding to the distance between dragon and hydra : 43 - 42 = 1 ] ;\n"
		"+ Hydra is defeated and the dragon rises to level 3" << endl;
	Fight(dragon, hydra);

	cout << "After the Fight :" << endl;
	dragon.Display();
	hydra.Display();

	cout << endl;
	cout << "4th Fight :" << endl;
	cout << "    when one creatures is defeated, nothing happpens" << endl;
	Fight(dragon, hydra);

	cout << "After the Fight :" << endl;
	dragon.Display();
	hydra.Display();
	_getch();
	return 0;
}


