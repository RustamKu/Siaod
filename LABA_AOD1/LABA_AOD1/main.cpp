#include <iostream>
#include <conio.h>

int main()
{
	setlocale(0, "RUS");
	int x, y;
	int c1, c2;
	int R;
	std::cout << "Введите ширину прямогугольника: ";
	std::cin >> c1; 
	std::cout << std::endl;
	std::cout << "Введите длину прямоугольника: ";
	std::cin >> c2;
	std::cout << std::endl;
	R = c2 / 2;
	std::cout << "Радиус равен " << R << std::endl;
	std::cout << "Введите координаты x и y ";
	std::cin >> x >> y ;
	if (((y*y + x*x) >= R*R) && (y >= R*(-1)  && y <= R) && (x <= 0 && x >= c1*(-1)))
	{
		std::cout << "Точка попала в закрашенную область" << std::endl;
	}
	else {
		std::cout << "Точка НЕ попала в закрашенную область" << std::endl;
	}
	system("pause");
	return 0;
}



































/*std::cout << "Введите координату x точки A без минуса( нижний левый угол) " << std::endl;
std::cin >> A.x;
A.x = A.x * (-1);
D.x = abs(A.x);
std::cout << "Введите координату y точки B( верхний левый угол) " << std::endl;
std::cin >> B.y;
C.y = abs(B.y);
C.x = D.x;
B.x = A.x;
//if ((A.x < 0 &&))*/