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
	int x = 0;
	int y = 0;
};

int main()
{
	setlocale(LC_ALL, "ru");

	std::vector<Point> point;

	std::cout << "������ ��������� X - Y:" << std::endl;

	for (int i = 0; i < 3; ++i)
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

	Point pointMinMax;

	for (int i = 0; i < point.size(); i++)
	{
		if (point[i].y > pointMinMax.y)
		{
			pointMinMax.y = point[i].y;
			pointMinMax.x = point[i].x;
		}
	}

	std::cout << "���� ���� ����� �������� �� ��� Y - : " << "��������� X: " << pointMinMax.x << " ��������� Y: " << pointMinMax.y << std::endl;

	return 0;
}