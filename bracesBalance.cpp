// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void check(vector<char>);
int main()
{
	string a;
	cout << "enter filename\n";
	cin >> a;
	ifstream fin(a, ios_base::in);
	vector<char> vec;
	char val;
	while (!fin.eof())
	{
		fin >> val;
		vec.push_back(val);
	}
	/*for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i];
	}*/
	check(vec);
	system("pause");
	return 0;
}

void check(vector<char> vec)
{
	int countL = 0;
	int countR = 0;
	for (int i = 0; i < vec.size()-1; i++)
	{
		if (vec[i] == '{') countL += 1;
		if (vec[i] == '}') countR += 1;
	}
	if (countL != countR) cout << "wrong balance of { and }\n";
	else cout << "evrthg is ok!\n";
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
