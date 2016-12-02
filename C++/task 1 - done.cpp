

#include <iostream>
#include <stdlib.h>

int main(char* args, int argc)
{
	int n = 0;
	int tempInput;
	int input[8];
	int random[8]{0,0,0,0,0,0,0,0};

	while (n < 8)
	{
	std::cin >> tempInput;
	input[n] = tempInput;
	n += 1;
	}

//randomisation
	n = 0;

	for (int i = 0; i < 8; i++)
		{
			int randn = rand()%8;

			if (random[randn] == 0)
				random[randn] = input[i];
			else
				for (int x = 0; x < 8; x++)
				{
					if (random[x] == 0)
					{
						random[x] = input[i];
						break;
					}
				}
			n += 1;
		}
	

	for (int i = 0; i < 8; i++)
	{
		std::cout << random[i] <<',';
	}

}