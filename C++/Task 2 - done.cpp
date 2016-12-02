#include <iostream>
#include <algorithm>

	int input;
	int factorial;
	int rFactorial;
	bool trailing = true;
	int count = 0;
	int zeroes;

int Factorialise(int n)
{

	if (n == 1)
		return 1;
	else
		return n * Factorialise(n - 1);
}

int CountZeroes(int x)
{
	for (int i = 10; x % i == 0;)
	{
		if (i > x)
			return count;
		else
		{
			count += 1;
			i = i * 10;
		}
	}
	return count;
}

int main(char* args, int argc)
{
	std::cin >> input;
	factorial = Factorialise(input);
	zeroes = CountZeroes(factorial);
	std::cout <<zeroes;

	while(true)
	return 0;
}