#include "drob.h"

// �������� ������ �������� ���� ����� �������
char varMenuMin() {
	char var;
	cout << "�������� ������� (1 - ����������, 0 - �����): ";
	while (true) {
		cin >> var;
		if (var == '1' || var == '0') {
			return var;
		}
		else {
			cout << "�����������. ��������� ����: ";
			cin.clear();
			cin.ignore();
		}
	}
}

//�������� �� ���� ����� �����
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
		cout << "���������� ������ ����� �����. ��������� ����: ";
	}
}

//���� �����
void drob::setNumber() {
	cout << "������� ���������: ";
	chis = getInteger();
	cout << "������� �����������: ";
	snam = getInteger();
	cout << endl;
}

