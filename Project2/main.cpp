#include<iostream>
#include<vector>
#include<string>

/*1. 
Создай класс Point 
Это будет точка в пространстве 
У нее внутри будет две переменные x и y, 
это координаты нашей точки 
Создай вектор элементов этих точек 
В вектор надо добавить 3 точки 
Координаты для них надо запросить у пользователя 
Далее пробегись по вектору и определи какая из точек находится выше всех по y, 
и выведи ее координаты на консоль
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

	std::cout << "Ввести кординаты X - Y:" << std::endl;

	for (int i = 0; i < 3; ++i)
	{
		Point zapPoint;
		std::cin >> zapPoint.x;
		std::cin >> zapPoint.y;

		point.push_back(zapPoint);
	}

	for (int i = 0; i < point.size(); i++)
	{
		std::cout << "Кордината X: " << point[i].x << " Кордината Y: " << point[i].y << std::endl;
	}

	std::cout << "Находим точку У которая находится выше всех." << std::endl;

	Point pointMinMax;

	for (int i = 0; i < point.size(); i++)
	{
		if (point[i].y > pointMinMax.y)
		{
			pointMinMax.y = point[i].y;
			pointMinMax.x = point[i].x;
		}
	}

	std::cout << "Выще всех точка кординат по оси Y - : " << "Кордината X: " << pointMinMax.x << " Кордината Y: " << pointMinMax.y << std::endl;

	return 0;
}