#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class drob
{
private:
	int chis = 0;
	int snam = 1;
	int getInteger();  //�������� �� ���� ����� �����

public:
	void setNumber();   //���� �����
	drob() {}

	drob& operator++() {
		chis += snam;
		if (chis % 2 == 0 && snam % 2 == 0) {  // ���� ��� ����� ������, �������� �� �������� �� 2
			while (chis % 2 == 0 && snam % 2 == 0) {
				chis /= 2;
				snam /= 2;
			}
		}
		if (chis % 3 == 0 && snam % 3 == 0)  // ���� ��� ����� ��������, �������� �� �������� �� 3
		{
			while (chis % 3 == 0 && snam % 3 == 0) {
				chis /= 3;
				snam /= 3;
			}
		}
		return *this;
	};

	drob& operator--() {
		chis -= snam;
		if (chis % 2 == 0 && snam % 2 == 0) {  // ���� ��� ����� ������, �������� �� �������� �� 2
			while (chis % 2 == 0 && snam % 2 == 0) {
				chis /= 2;
				snam /= 2;
			}
		}
		if (chis % 3 == 0 && snam % 3 == 0)  // ���� ��� ����� ��������, �������� �� �������� �� 3
		{
			while (chis % 3 == 0 && snam % 3 == 0) {
				chis /= 3;
				snam /= 3;
			}
		}
		return *this;
	};

	friend ostream& operator<< (ostream& os, const drob& db) { //������� str � ����� ������
			//�������� ����� ����� �� ����� � ������� �� �����
		if (db.chis == 0) return os << 0 << endl;
		if (db.chis > db.snam) {
			return os << db.chis / db.snam << " " << (db.chis - db.snam * (db.chis / db.snam)) << "/" << db.snam << endl;
		}
		else return os << db.chis << "/" << db.snam << endl;
	}

};

char varMenuMin();  // �������� ������ �������� ���� ����� �������