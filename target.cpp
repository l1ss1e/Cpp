
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {

	int prob, i1, i2;
    for(int i=0; i<numbers.size(); i++) 
    {
        prob=target-numbers[i];
        for(int j=i+1; j<numbers.size(); j++)
        {
             if(numbers[j]==prob) 
            {
              i2=j;
              i1=i;
            }
        }
        
    }
	cout << i1 << i2;
    return {i1, i2};
	
}
int main()
{
	two_sum({ 2, 2, 3 }, 4);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > 