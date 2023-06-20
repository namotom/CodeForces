/*
Problem: 1426A Floor Number
Link: https://codeforces.com/problemset/problem/1426/A
Compiler Used: MS C++ 2017
Time: 31ms
Memory: 0KB
*/

#include<iostream>

int main()
{
	int n,x,t,floor;
	std::cin >>t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n >> x;
		if (n == 1 || n == 2)
			std::cout << 1 << std::endl;
		else
		{
			for (floor = 2; floor <= n; floor++)
			{
				int j = floor - 2;
				if (n >= (j * x + 3) && n <= ((j + 1) * x + 2))
					break;
			}
			std::cout << floor << std::endl;
		}
	}
}