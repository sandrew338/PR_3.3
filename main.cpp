// Lab_03_3.cpp
// < ����������, �����>
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	do {
		cout << "R should be more than zero\nR = "; cin >> R;
	} while (R <= 0);
	
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
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