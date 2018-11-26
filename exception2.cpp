
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int num;
class GoWrong
{
	public:
		GoWrong()
		{			
			char * p = new char[num];
			delete[] p;
		}

};
int main()
{
	cout << "Enter big num: ";
	cin >> num;
	
	try
	{
		GoWrong canGo;
	}
	catch (bad_alloc &e)
	{
		cout << "Error is: " << e.what() << "\n ";
	}
	cout << "Still running";
}