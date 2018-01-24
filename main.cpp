#include <iostream>
#include <Windows.h>
using namespace std;
int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[30] = "\0";
	cout << "Ведите имя\n";
	cin >> name;
	char surname[30] = "\0";
	cout << "Введите фамилию\n";
	cin >> surname;
	char patronymic[30]="\0";
	cout << "Введите отчество\n";
	cin >> patronymic;
	char group[30]="\0";
	cout << "Введите имя группы\n";
	cin >> group;
	int len = 31;
	int len_str1 = 25 + strlen(group);
	int len_str2 = strlen(name) + strlen(surname) + strlen(patronymic) + 6;
	int len_str3 = strlen(name) + strlen(surname) + strlen(patronymic) + 6;
	if (len_str1 >= len_str2 && len_str1 > 31)
		len = len_str1;
	else
		if (len_str2 > 31)
			len = len_str2;
	cout << "\n\t\t\t";
	for (int counter = 0; counter < len; counter++)
		cout << "*";

	cout << "\n\t\t\t* Лабораторная работа 1 ";
	for (int counter = 0; counter < len - 25; counter++)
		cout << " ";

	cout << "*\n\t\t\t* Выполнил(а): ст. гр. " << group;
	for (int counter = 0; counter <= (len - len_str1); counter++)
		cout << " ";

	cout<< "*\n\t\t\t* " << surname << " " << name << " " << patronymic;
	for (int counter = 0; counter <= (len - len_str2); counter++)
		cout << " ";
	cout << "*";

	cout << "\n\t\t\t";
	for (int counter = 0; counter < len; counter++)
		cout << "*";
	cout << "\n";

	cout << endl;

	system("pause");
	return 0;
}