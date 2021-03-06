// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include "pch.h"

#include <iostream>

#include <string>

#include <fstream>

using namespace std;


class Zoo
{	
	string animal, name;
	int age, sex, qt;
public:
	void setAn(string anIn);
	void setName(string nameIn);
	void setAge(int ageIn);
	void setSex(int sexIn);
	void setQt(int qtIn);
	void printInfo();
	string getName();
	int getAge();
	int getSex();
	int getQt();

};

void Zoo::setAn(string anIn)
{
	animal = anIn;
}

void Zoo::setName(string nameIn)
{
	name = nameIn;
}

void Zoo::setSex(int sexIn)
{
	sex = sexIn;
}

void Zoo::setAge(int ageIn)
{
	age = ageIn;
}

void Zoo::setQt(int qtIn)
{
	qt = qtIn;
}

string Zoo::getName()
{
	return name;
}

int Zoo::getAge()
{
	return age;
}

int Zoo::getSex()
{
	return sex;
}

int Zoo::getQt()
{
	return qt;
}

void Zoo::printInfo()
{
 	cout << name << "  " << age;
}
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	Zoo z1;
	z1.setAn("a");
	z1.setName("A");
	z1.setQt(3);
	z1.setAge(2);
	z1.printInfo();
	return 0;
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
