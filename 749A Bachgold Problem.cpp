/*
* Problem: 749A Bachgold Problem
Link: https://codeforces.com/problemset/problem/749/A
Compiler Used: MS C++ 2017
Time: 46ms
Memory: 12KB
*/

#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	if (n % 2 == 0)
	{
		std::cout << n / 2 << std::endl;
		for (int i = 1; i <= n / 2; i++)
			std::cout << 2 << " ";
	}
	else
	{
		n -= 3;
		std::cout << (n / 2) + 1 << std::endl;
		for (int i = 1; i <= n / 2; i++)
			std::cout << 2 << " ";
		std::cout << 3;
	}
}