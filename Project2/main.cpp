#include<iostream>
#include<vector>
#include<string>

/*1. 
������ ����� Point 
��� ����� ����� � ������������ 
� ��� ������ ����� ��� ���������� x � y, 
��� ���������� ����� ����� 
������ ������ ��������� ���� ����� 
� ������ ���� �������� 3 ����� 
���������� ��� ��� ���� ��������� � ������������ 
����� ��������� �� ������� � �������� ����� �� ����� ��������� ���� ���� �� y, 
� ������ �� ���������� �� �������
*/

class Point
{
public:
	int x;
	int y;
};

int main()
{
	setlocale(LC_ALL, "ru");

	std::vector<Point> point;

	int cor = 3;

	std::cout << "������ ��������� X - Y:" << std::endl;

	for (; cor > 0; --cor)
	{
		Point zapPoint;
		std::cin >> zapPoint.x;
		std::cin >> zapPoint.y;

		point.push_back(zapPoint);
	}

	for (int i = 0; i < point.size(); i++)
	{
		std::cout << "��������� X: " << point[i].x << " ��������� Y: " << point[i].y << std::endl;
	}

	std::cout << "������� ����� � ������� ��������� ���� ����." << std::endl;

	int maxX = 0;
	int maxY = 0;

	for (int i = 0; i < point.size(); i++)
	{
		if (point[i].y > maxY && point[i].x > 0)
		{
			maxY = point[i].y;
			maxX = point[i].x;
		}
	}

	std::cout << "���� ���� ����� �������� �� ��� Y - : " << "��������� X: " << maxX << " ��������� Y: " << maxY << std::endl;

	return 0;
}