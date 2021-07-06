#include "Damage.h"
#include "../Core/Core.h"
#include <iostream>
#include <boost/locale.hpp>
#include <iostream>

using namespace::std;
using namespace boost::locale;
void Damage::Calculation(int attackPower, int targetDefense)
{
	generator gen;
	gen.add_messages_path("..\\locale");
	gen.add_messages_domain("Damage");

	//-- LANGUAGE SWITCH --
	std::locale loc = gen("de_DE.UTF-8");
	//std::locale loc = gen("");
	std::locale::global(loc);
	std::cout.imbue(loc);

	Core core = Core();
	bool crit = core.CheckCriticalHit();

	int damage = attackPower - targetDefense;
	if (crit) {
		damage = damage * 2;
	}
	
	std::cout << translate("Damage Dealt: " + damage) << std::endl;
}
