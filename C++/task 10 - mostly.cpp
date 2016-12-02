#include <iostream>
#include <vector>

std::vector<int> clearVector(std::vector<int> sec)
{
	while(sec.size()>0)
		sec.pop_back();
	return sec;
}


int main(char* args, int argc)
{
	std::vector<int> sequence = {1,2,3,4,2,4,5,2,1,5,3,1,2,3,4,5,3};
	std::vector<int> longest;
	std::vector<int> comparison;
	int check;

	comparison.push_back(sequence[0]);
	for (int i = 1;i < sequence.size();i++)
	{
		if (sequence[i] > comparison.back())
		{
			comparison.push_back(sequence[i]);
		}
		else
		{
			if (comparison.size() > longest.size())
			{
				clearVector(longest);
				for (int x = 0;x < comparison.size();x++)
				{
					longest.push_back(comparison[x]);
				}
				clearVector(comparison);
			}
		}
	}
	for (int i = 0;i < longest.size();i++)
		std::cout << longest[i];
	
	while (true) {};
	return 0;
}