/*
Problem: 1370A Maximum GCD
Link: https://codeforces.com/problemset/problem/1370/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include <iostream>

int main()
{
	int t, n, g;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		int b;
		if (n % 2 == 0)
			g = n / 2;
		else
		{
			n--;
			g = n / 2;
		}
		std::cout << g << std::endl;
	}
}
