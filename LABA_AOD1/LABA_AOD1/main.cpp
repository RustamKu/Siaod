#include <iostream>
#include <conio.h>

int main()
{
	setlocale(0, "RUS");
	int x, y;
	int c1, c2;
	int R;
	std::cout << "������� ������ ���������������: ";
	std::cin >> c1; 
	std::cout << std::endl;
	std::cout << "������� ����� ��������������: ";
	std::cin >> c2;
	std::cout << std::endl;
	R = c2 / 2;
	std::cout << "������ ����� " << R << std::endl;
	std::cout << "������� ���������� x � y ";
	std::cin >> x >> y ;
	if (((y*y + x*x) >= R*R) && (y >= R*(-1)  && y <= R) && (x <= 0 && x >= c1*(-1)))
	{
		std::cout << "����� ������ � ����������� �������" << std::endl;
	}
	else {
		std::cout << "����� �� ������ � ����������� �������" << std::endl;
	}
	system("pause");
	return 0;
}



































/*std::cout << "������� ���������� x ����� A ��� ������( ������ ����� ����) " << std::endl;
std::cin >> A.x;
A.x = A.x * (-1);
D.x = abs(A.x);
std::cout << "������� ���������� y ����� B( ������� ����� ����) " << std::endl;
std::cin >> B.y;
C.y = abs(B.y);
C.x = D.x;
B.x = A.x;
//if ((A.x < 0 &&))*/