#include <iostream>

int IsPrime(int n, int p)
{
	if (n == 1)
		return true;
	else if ((p % n) == 0)
		return false;
	else
		IsPrime(n - 1, p);
}

int main(char* args, int argc)
{
	int input;
	std::cin >> input;
	if ((IsPrime(input - 1, input)) == true)
		std::cout << input << " is prime";
	else
		std::cout << input << " is not prime";
	while (true) {};
	return 0;
}