//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n;
	cout << "how long chain?\n";
	cin >> n;
	float result = 1;
		for (int i = 0; i < n; i++) result = 1 + 1 / result;
		cout << result << "\n";
}



