#include "Damage.h"
#include "../Core/Core.h"
#include <iostream>
#include <iostream>

using namespace::std;

void Damage::Calculation(int attackPower, int targetDefense)
{
	Core core = Core();
	bool crit = core.CheckCriticalHit();

	int damage = attackPower - targetDefense;
	if (crit) {
		damage = damage * 2;
	}
	
	std::cout << "Damage Dealt: " << damage << std::endl;
}
