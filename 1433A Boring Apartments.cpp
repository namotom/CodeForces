/*
Problem: 1433A Boring Apartments
Link: https://codeforces.com/problemset/problem/1433/A
Compiler Used: MS C++ 2017
Time: 0ms
Memory: 4KB
*/

#include <iostream>

int main()
{
	int t, x, d, o;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> x;
		d = x % 10;
		o = (x / d) % 10000;
		if (o == 1)
			std::cout << (d - 1) * 10 + 1 << std::endl;
		else if (o == 11)
			std::cout << (d - 1) * 10 + 3 << std::endl;
		else if (o == 111)
			std::cout << (d - 1) * 10 + 6 << std::endl;
		else
			std::cout << d * 10 << std::endl;
	}
}