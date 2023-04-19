#include "drob.h"

// проверка выбора варианта меню после расчета
char varMenuMin() {
	char var;
	cout << "Выберите вариант (1 - продолжить, 0 - выход): ";
	while (true) {
		cin >> var;
		if (var == '1' || var == '0') {
			return var;
		}
		else {
			cout << "Неправильно. Повторите ввод: ";
			cin.clear();
			cin.ignore();
		}
	}
}

//проверка на ввод целых чисел
int drob::getInteger()
{
	int number;
	while (true)
	{
		if (!(cin >> number) || getchar() != '\n') {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		else return number;
		cout << "Необходимо ввести целое число. Повторите ввод: ";
	}
}

//ввод чисел
void drob::setNumber() {
	cout << "Введите числитель: ";
	chis = getInteger();
	cout << "Введите знаменатель: ";
	snam = getInteger();
	cout << endl;
}

