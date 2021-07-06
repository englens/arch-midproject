#include "Damage.h"
#include "../Core/Core.h"
#include <iostream>
#include <boost/locale.hpp>
#include <iostream>

using namespace::std;
using namespace boost::locale;

int Damage::Calculation(int attackPower, int targetDefense)
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("x");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	std::cout.imbue(locale());

	Core core = Core();
	bool crit = core.CheckCriticalHit();

	int damage = attackPower - targetDefense;
	if (crit) {
		damage = damage * 2;
	}
	
	std::cout << translate("Damage Dealt: " + damage) << std::endl;
	return damage;
}