#include "Core.h"
#include <iostream>


void Core::MisslePathMath()
{
	std::cout << "Calculating Missle Path Math." << std::endl;
}

bool Core::CheckCriticalHit() 
{
	// always a crit for now
	if (true) {
		return true;
	}
	std::cout << "Checked Critical Hit." << std::endl;
}
