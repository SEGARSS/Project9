#include<iostream>
#include<vector>
#include<string>

/*1. ������ ������ �� int 
������ 10 ����� � ������, ������� ����� ������������ 
�������� �� ����� ������� � ����� ����� ��������� � ����� ������� �����, � ������ �� �� �����*/

int main()
{
	setlocale(LC_ALL, "ru");

	std::vector<int> chisla;

	int n = 0;

	std::cout << "������ �����." << std::endl;
	std::cin >> n;

	for (; n > 0; --n)
	{
		int temp = 0;
		std::cin >> temp;
		chisla.push_back(temp);
	}

	std::cout << "����� �������." << std::endl;

	for (int i = 0; i < chisla.size(); i++)
	{
		std::cout << chisla[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "������� ����������� �������� � �������." << std::endl;

	int min = 999999;
	int max = 0;

	for (int i = 0; i < chisla.size(); i++)
	{		
		if (chisla[i] < min)
		{
			min = chisla[i];
		}
		else if (chisla[i] > max)
		{
			max = chisla[i];
		}
	}


	std::cout << "����������� �������� � ������� - " << min << std::endl;
	std::cout << "������������ �������� � ������� - " << max << std::endl;

	return 0;
}