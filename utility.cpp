#include "utility.h"
#include <iostream>
#include <string>

bool io_yes_no()
{
	while (true)
	{
		std::string input;
		std::cin >> input;
		if (input.compare("y") == 0 || input.compare("Y") == 0)
		{
			return true;
		}
		else if (input.compare("n") == 0 || input.compare("N") == 0)
		{
			return false;
		}
	}
}