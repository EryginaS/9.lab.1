//В файл записаны ИФО студента и их возраст. Вывести на экран имена студентов, чей возраст старше 20.
#include <iostream>
#include <string>
#include <Windows.h>
#include<fstream>
using namespace std;
struct study { string name; string n; int year; };//структура студент(имя, фамилия, возраст)
int main()
{
	SetConsoleCP(1251);// позволяет записывать русские символы в строки/массивы 
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	struct study mas[50];//массив структур ,студенты
	//открываем файл
	ifstream   f("info.txt");
	int i = 0;
	while (f)//пока файл не закнчится 
	{
		f >> mas[i].name;
		f >> mas[i].n;
		f >> mas[i].year;
		i++;

	}
	f.close();
	cout << "Студенты старше 20 лет: " << endl;
	for (int j = 0; j < i; j++)
	{
		if (mas[j].year >= 20)
			cout << mas[j].name << " " << mas[j].n << endl;
	}



	system("pause");
	return 0;

}