#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int water, milk;

	while (true) {

		cout << "������� ���������� ���� � ��: ";
		cin >> water;
		if (water < 0) {
			cout << "���������� ���� �� ����� ���� �������������. ��������� �������..." << endl;
		}
		else if (water < 30) {
			cout << "������ ���������� ���� �� ������ �� �� ���� �������. ��������� �������." << endl;
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "������� ���������� ������ � ��: ";
		cin >> milk;
		if (milk < 0) {
			cout << "���������� ���� �� ����� ���� �������������. ��������� �������..." << endl;
		}
		else if (water < 300 && milk < 270) {
			cout << "��� ����� ���������� ���� ����� ������ ������, ����� ����������� ���� �� 1 �����. ��������� �������." << endl;
		}
		else {
			break;
		}
	}

	bool work = ((water >= 30 && milk >= 270) || water >= 300);
	
	int americano = 0, latte = 0;

	while (work) {
		
		int coffe;
		cout << "�������� ������� (1 - ���������, 2 - �����): ";
		cin >> coffe;

		switch(coffe){

		case 1:
			if (water >= 300) {
				water -= 300;
				americano++;
				cout << "��� ������� �����. " << endl;
			}
			else {
				cout << "�� ������� ����." << endl;
			}
			break;
		case 2:
			if (water >= 30 && milk >= 270) {
				water -= 30;
				milk -= 270;
				latte++;
				cout << "��� ������� �����. " << endl;
				break;
			}
			else if (milk < 270) {
				cout << "�� ������� ������." << endl;
			}
			break;
		default:
			cout << "�� ����� �������� ��������. ��������� �������." << endl;
			break;

		}
		work = ((water >= 30 && milk >= 270) || water >= 300);
	}


	cout << endl << "***�����***" << endl << endl;
	cout << "������������ ��������: " << endl;
	cout << "����: " << water << " ��." << endl;
	cout << "������: " << milk << " ��." << endl;
	cout << "������ ��������� ������������: " << americano << " ��." << endl;
	cout << "������ ����� ������������: " << latte << " ��." << endl;
	
	



		

}