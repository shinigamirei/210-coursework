#include <iostream>
#include <string>

std::string RemoveVowel(int n,std::string m)
{
	if (n == m.size())
		return " ";
	else if (m[n] == 'a' || m[n] == 'e' || m[n] == 'i' || m[n] == 'o' || m[n] == 'u')
		return RemoveVowel(n+1, m);
	else
		return(m[n] + RemoveVowel(n+1,m));
}


int main(char* args, int argc)
{
	std::string Str = "Beautiful ";
	std::string output = RemoveVowel(0, Str);
	std::cout <<output;


	while (true) {}
	return 0;
}
