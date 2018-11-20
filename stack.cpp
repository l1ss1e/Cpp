#include "pch.h"
#include <iostream>

using namespace std;
int Stack[100], ind;
void push(int x)
{
	++ind;
	Stack[ind] = x;
}
bool isEmpty()
{
	if (ind == 0) return true;
	else return false;
}
void pop()
{
	Stack[ind] = 0;
	--ind;
}
int top()
{
	return Stack[ind];
}
int main()
{
	ind = -1;
	push(7);
	push(6);
	push(3);
	pop();
	push(10);
	if (!isEmpty())
	{
		for (int i = 0; i < ind+1; i++) cout << Stack[i]<<" ";  //why ind +1?????????????????????????????
		cout << " Top is: "<<top();
	}

	return 0;
}