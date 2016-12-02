#include <iostream>
#include <math.h>



int main(char* args, int argc)
{
	int values[6] = { 2,3,5,7,9,10 };
	int upper = 14;
	int lower = 10;
	float valuesLen = 5;
	int find;
	int point;
	int prepoint;
	bool found = false;


	point = floor(valuesLen/2);
	
	while (found == false)
	{
		find = values[point];
		if ((find < upper || find == upper) && (find > lower||find == lower))
		{
			std::cout << "true";
			found = true;
		}
		else if (find > upper)
			point = floor(point*0.5);
		else if (find < lower)
		{
			prepoint = point;
			point = floor((point + valuesLen) / 2);
			if (point = prepoint)
				point++;
		}
	}

	while (true) {};
	return 0;
}