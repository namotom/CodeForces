/*
Problem: 1560A Dislike Of Threes
Link: https://codeforces.com/problemset/problem/1560/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include <iostream>

int main()
{
	int t, k;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> k;
		for (int out = 1; out<=1666; out++)
		{
			if (out % 3 == 0 || out % 10 == 3)
				continue;
			else
			{
				k--;
				if (k == 0)
				{
					std::cout << out << std::endl;
					break;
				}
			}
		}
	}
}