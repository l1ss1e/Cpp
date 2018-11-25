// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
bool error = false;
bool error1 = true;
bool error2 = true;
void err()
{
	if (error)
	{
		throw "Error";
	}
	/*if (error1)
	{
		throw string("Error1");
	}*/
	if (error2)
	{
		throw 8;
	}
}
int main()
{
	try
	{
		err();
	}
	catch (const char * e)
	{
		cout << e;
	}
	catch (string &e)
	{
		cout << e;
	}
	catch (int e)
	{
		cout << e;
	}
}

