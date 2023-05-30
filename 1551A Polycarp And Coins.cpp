/*
Problem: 1551A Polycarp And Coins
Link: https://codeforces.com/problemset/problem/1551/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 4KB
*/

#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		long float n;
		std::cin >> n;
		int y1 = round(n / 3);
		int y2 = n;
		int x1 = n - 2 * y1;
		int x2 = n - 2 * y2;

		if (x1 < 0)
			std::cout << x2 << " " << y2 << std::endl;
		else
			std::cout << x1 << " " << y1 << std::endl;
	}
}