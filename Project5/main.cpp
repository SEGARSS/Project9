#include<iostream>
#include<vector>
#include<string>

/*1.
создай вектор с точками (класс Point у теб€ уже был в прошлой задаче)
запиши туда 3 точки, координаты запроси у пользовател€ с консоли
далее пробегись по этому вектору и прибавь во всех элементах вектора к х-координате 1
не забывай про "+=", так же тут можно использовать инкремент "++"
и потом выведи результат
*/

class Point
{
public:
	int x = 0;
	int y = 0;
};

int main()
{
	setlocale(LC_ALL, "ru");

	std::vector<Point> point;

	int cor = 0;
	std::cout << "¬вести кординаты X - Y:" << std::endl;
	std::cin >> cor;


	for (int i = 0; i < cor; ++i)
	{
		Point zapPoint;
		std::cin >> zapPoint.x;
		std::cin >> zapPoint.y;

		point.push_back(zapPoint);
	}

	for (int i = 0; i < point.size(); i++)
	{
		std::cout << " ордината X: " << point[i].x << "  ордината Y: " << point[i].y << std::endl;
	}

	std::cout << "ѕрибавл€ем ко всем кор ’ + 1:" << std::endl;

	for (int i = 0; i < point.size(); i++)
	{
		std::cout << " ордината X: " << point[i].x + 1 << "  ордината Y: " << point[i].y << std::endl;
	}

	return 0;
}