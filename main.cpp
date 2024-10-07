#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int water, milk;

	while (true) {

		cout << "Введите количество воды в мл: ";
		cin >> water;
		if (water < 0) {
			cout << "Количество воды не может быть отрицательным. Повторите попытку..." << endl;
		}
		else if (water < 30) {
			cout << "Такого количества воды не хватит ни на один напиток. Повторите попытку." << endl;
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "Введите количество молока в мл: ";
		cin >> milk;
		if (milk < 0) {
			cout << "Количество воды не может быть отрицательным. Повторите попытку..." << endl;
		}
		else if (water < 300 && milk < 270) {
			cout << "При таком количестве воды нужно больше молока, чтобы приготовить хотя бы 1 латте. Повторите попытку." << endl;
		}
		else {
			break;
		}
	}

	bool work = ((water >= 30 && milk >= 270) || water >= 300);
	
	int americano = 0, latte = 0;

	while (work) {
		
		int coffe;
		cout << "Выберите напиток (1 - Американо, 2 - Латте): ";
		cin >> coffe;

		switch(coffe){

		case 1:
			if (water >= 300) {
				water -= 300;
				americano++;
				cout << "Ваш напиток готов. " << endl;
			}
			else {
				cout << "Не хватает воды." << endl;
			}
			break;
		case 2:
			if (water >= 30 && milk >= 270) {
				water -= 30;
				milk -= 270;
				latte++;
				cout << "Ваш напиток готов. " << endl;
				break;
			}
			else if (milk < 270) {
				cout << "Не хватает молока." << endl;
			}
			break;
		default:
			cout << "Вы ввели неверное значение. Повторите попытку." << endl;
			break;

		}
		work = ((water >= 30 && milk >= 270) || water >= 300);
	}


	cout << endl << "***Отчет***" << endl << endl;
	cout << "Ингридиентов осталось: " << endl;
	cout << "Вода: " << water << " мл." << endl;
	cout << "Молоко: " << milk << " мл." << endl;
	cout << "Кружек американо приготовлено: " << americano << " шт." << endl;
	cout << "Кружек латте приготовлено: " << latte << " шт." << endl;
	
	



		

}