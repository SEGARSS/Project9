#include<iostream>
#include<vector>
#include<string>

/*1. Создай вектор из int 
Добавь 10 чисел в вектор, которые введёт пользователь 
Пройдись по этому вектору и найди самое маленькое и самое большое числа, и выведи их на экран*/

int main()
{
	setlocale(LC_ALL, "ru");

	std::vector<int> chisla;

	int n = 0;

	std::cout << "Ввести числа." << std::endl;
	std::cin >> n;

	for (; n > 0; --n)
	{
		int temp = 0;
		std::cin >> temp;
		chisla.push_back(temp);
	}

	std::cout << "Вывод вектора." << std::endl;

	for (int i = 0; i < chisla.size(); i++)
	{
		std::cout << chisla[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "Находим минимальное значение в векторе." << std::endl;

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


	std::cout << "Минимальное значение в векторе - " << min << std::endl;
	std::cout << "Максимальное значение в векторе - " << max << std::endl;

	return 0;
}