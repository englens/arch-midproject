#include "Damage.h"
#include "../Core/Core.h"
#include <iostream>

int Damage::Calculation(int attackPower, int targetDefense)
{
	int damage = attackPower - targetDefense;
	std::cout << "Damage Dealt: " + damage << std::endl;
	return damage;
}