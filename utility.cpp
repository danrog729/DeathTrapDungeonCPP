#include "utility.h"
#include <iostream>
#include <string>
#include <limits>

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

int io_valid_int(int minValue, int maxValue)
{
	while (true)
	{
		int output;
		if (std::cin >> output)
		{
			if (minValue <= output && output < maxValue)
			{
				return output;
			}
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}