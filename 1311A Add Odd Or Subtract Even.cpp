/*
Problem: 1311A Add Odd Or Subtract Even
Link: https://codeforces.com/problemset/problem/1311/A
Compiler Used: MS C++ 2017
Time: 46ms
Memory: 8KB
*/

#include<iostream>

int main()
{
	int t, a, b, count;

	std::cin >>t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> a >> b;
		if (a == b)
			count = 0;
		else
		{
			if (a > b)
				((a - b) % 2 == 0) ? count = 1 : count = 2;
			else
				((b - a) % 2 == 0) ? count = 2 : count = 1;
		}
		std::cout << count << std::endl;
	}
}