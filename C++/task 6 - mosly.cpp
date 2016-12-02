#include <iostream>



int main(char* args, int argc)
{
	char string[16] = {"This is awesome"};
	char rString[16] = { "               " };
	int loopcount = 0;
	int wordStart = 0;
	int wordEnd;
	int len = strlen(string);
	int rStrPoi = len;

	//std::cout << string << len;
	for (int i = 0; i < len +1; i++)
	{
		if (string[i] == ' ' || i == len )
		{
			wordEnd = i - 1;
			rStrPoi = (len - wordStart);
			for (int z = wordEnd; z > wordStart - 1; z--)
			{
				rString[rStrPoi] = string[z];
				rStrPoi = rStrPoi - 1;
			}
			wordStart = i+1;
		}

	}
	for (int j=0; j < len +1;j++)
	std::cout << rString[j];

	while (true) {}
	return 0;
}
