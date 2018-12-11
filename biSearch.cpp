// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int binS(int * arr, int x)
{
	int l=0, r=sizeof(arr)-1, mid;
	
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (x==arr[mid]) return mid;
		if (x < arr[mid]) r = mid - 1;
		else l = mid + 1;
	}
	return l;
}

int main()
{
	int arr[10] = { 1,2,3,4,5};
	cout << binS(arr, 1) << binS(arr, 2) << binS(arr, 3) << binS(arr, 4) << binS(arr, 5);
	
}
