#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	int number;
	int reverse = 0;
	cout << "Введите число:"; cin >> number;

	int buffer = number; 

	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
		
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Число полиндром" << endl;
	}
	else
	{
		cout << "Это обычное число" << endl;
	}
}


