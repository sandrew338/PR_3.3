// Lab_03_3.cpp
// < Назаркевич, Андрій>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	do {
		cout << "R should be more than zero\nR = "; cin >> R;
	} while (R <= 0);
	
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -1 - R)
		y = 1;
	else
		if (-1 - R < x && x <= -1)
			y = -sqrt(pow(R, 2) - pow(x + 1, 2));
		else
			if (-1 < x && x <= 2)
				y = -R;
			else
				y = x;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}