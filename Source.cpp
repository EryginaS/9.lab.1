//� ���� �������� ��� �������� � �� �������. ������� �� ����� ����� ���������, ��� ������� ������ 20.
#include <iostream>
#include <string>
#include <Windows.h>
#include<fstream>
using namespace std;
struct study { string name; string n; int year; };//��������� �������(���, �������, �������)
int main()
{
	SetConsoleCP(1251);// ��������� ���������� ������� ������� � ������/������� 
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	struct study mas[50];//������ �������� ,��������
	//��������� ����
	ifstream   f("info.txt");
	int i = 0;
	while (f)//���� ���� �� ��������� 
	{
		f >> mas[i].name;
		f >> mas[i].n;
		f >> mas[i].year;
		i++;

	}
	f.close();
	cout << "�������� ������ 20 ���: " << endl;
	for (int j = 0; j < i; j++)
	{
		if (mas[j].year >= 20)
			cout << mas[j].name << " " << mas[j].n << endl;
	}



	system("pause");
	return 0;

}