/*
Problem: 705A Hulk
Link: https://codeforces.com/problemset/problem/705/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	for (int i = 0; i <n; i++)
	{		
		if (i % 2 == 0)
		{
			if (i + 1 == n)
				std::cout << "I hate it";
			else
				std::cout << "I hate that ";
		}
		else
		{
			if (i + 1 == n)
				std::cout << "I love it";
			else
				std::cout << "I love that ";
		}
	}
}