#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int * p = new int[1];
	int * p1;
	int size = 0, n=0;
	while (n >= 0)
	{
		cout << "\nEnter num:  ";
		cin >> n;
		if (size == 0)
		{
			p[size] = n;
			cout << p[size]<<"\n";
			size++;
		}
		else
		{
			p1 = new int[size + 1];
			for (int i = 0; i < size; i++)
			{
				p1[i] = p[i];
			}
			p1[size] = n;
			delete[] p;
			p = new int[size+1];
			for (int i = 0; i < size+1; i++)
			{
				p[i] = p1[i];
				cout << p[i] << " ";
			}
			delete[] p1;
			size++;
		}

	}
	delete[] p;
	return 0;

}