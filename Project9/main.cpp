#include<iostream>
#include<vector>
#include<string>

int main()
{
	std::vector<int> chisla;

	for (int i = 0; i <= 100; ++i)
	{
		int temp = 0;
		temp += i;
		chisla.push_back(temp);
	}

	for (int i = 0; i < chisla.size(); i++)
	{
		std::cout << chisla[i] << " ";
	}

	std::cout << std::endl << "/-------------------------------------------------------------------/" << std::endl;

	for (int i = chisla.size() - 1; i > 0; --i)
	{
		std::cout << chisla[i] << " ";
	}

	std::cout << std::endl << "/-------------------------------------------------------------------/" << std::endl;

	return 0;
}