#include<iostream>
#include<vector>
#include<string>

/*1.
������ ������ � ������� (����� Point � ���� ��� ��� � ������� ������)
������ ���� 3 �����, ���������� ������� � ������������ � �������
����� ��������� �� ����� ������� � ������� �� ���� ��������� ������� � �-���������� 1
�� ������� ��� "+=", ��� �� ��� ����� ������������ ��������� "++"
� ����� ������ ���������
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
	std::cout << "������ ��������� X - Y:" << std::endl;
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
		std::cout << "��������� X: " << point[i].x << " ��������� Y: " << point[i].y << std::endl;
	}

	std::cout << "���������� �� ���� ��� � + 1:" << std::endl;

	for (int i = 0; i < point.size(); i++)
	{
		std::cout << "��������� X: " << point[i].x + 1 << " ��������� Y: " << point[i].y << std::endl;
	}

	return 0;
}