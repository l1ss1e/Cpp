// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	
	int n, w, h;
	char symb;
	cout << "For * print 1\n" << "For + print 2\n" << "For # print 3\n";
	cin >> n;
	cout << "Enter height\n";
	cin >> h;
	cout << "Enter width\n";
	cin >> w;
	////////////////////////////////////////////////как отче наш запомнить!!!//////////////////////////////////
	char** romb = new char *[w];
	for (int i = 0; i < w; i++)
		romb[i] = new char[h];
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	switch (n)
	{
		case 1: symb = '*';
			break;
		case 2: symb = '+';
			break;
		case 3: symb = '#';
			break;
	}
	for (int i = 0; i < h; i++)
	{
		if(i<h/2)
		{
			romb[i][i + w / 2] = symb;
			romb[i][w / 2 - i] = symb;
		}
		if (i >= h / 2)
		{
			romb[i][i-w/2] = symb;
			romb[i][h-i+w/2-1] = symb;
		}
		
	}

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			if (romb[i][j] != symb) romb[i][j] = ' ';
			cout << romb[i][j];
		}
		cout << "\n";
	}
	delete[] romb;
	system("pause");
	return 0;
}

