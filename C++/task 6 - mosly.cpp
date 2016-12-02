#include <iostream>



int mains(char* args, int argc)
{
	char string[16] = {"This is awesome"};
	char rString[16];
	int loopcount = 0;
	int wordStart = 0;
	int wordEnd;
	int len = strlen(string);
	int rStrPoi = len;

	//std::cout << string << len;
	for (int i = 0; i < 16; i++)
	{

		if (string[i] == ' ' || i == len)
		{
			wordEnd = i;	
			for (int z = wordEnd; z > wordStart; z--)
			{
				rStrPoi = (len - i);
				rString[rStrPoi] = string[z];
			}
			wordStart = i+1;
		}

	}
	std::cout << rString;

	while (true) {}
	return 0;
}
