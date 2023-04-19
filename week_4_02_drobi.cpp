/*
В уже существующий класс Дробь добавьте перегрузку
инкремента и декремента.
*/

#include "drob.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (true) {
		system("cls");
		cout << "--------Дроби - увеличение/уменьшение на 1 -----------" << endl << endl;
		drob drob1;
		drob1.setNumber();
		cout << "Исходное число: " << drob1 << endl;
		cout << "Число после операции инкремента: " << ++drob1 << endl;

		cout << "Новое число" << endl << endl;
		drob1.setNumber();
		cout << "Исходное число: " << drob1 << endl;
		cout << "Число после операции декремента: " << --drob1 << endl;

		if (varMenuMin() == '1') continue;   //выбор пукнта меню после расчета
		else break;
	}
	cout << endl;
	system("pause");
	return 0;

}

