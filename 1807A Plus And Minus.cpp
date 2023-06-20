/*
Problem: 1807A Plus And Minus
Link: https://codeforces.com/problemset/problem/1807/A
Compiler Used: MS C++ 2017
Time: 0ms
Memory: 4KB
*/

#include<iostream>

int main()
{
	int t,a,b,c;

	std::cin >>t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> a >> b >> c;

		if (a + b == c)
			std::cout << "+" << std::endl;
		else
			std::cout << "-" << std::endl;
	}
}