

#include <iostream>
#include <math.h>

int main(char* args, int argc)
{
	double input;
	double root = 1;
	bool found = false;

	std::cin >> input;

	while (found == false)
	{
		root = sqrt(input);
		if (floor(root) == root)
		{
			std::cout << root;
			found = true;
		}
		else
			input -= 1;
	}
}