/*
Problem: 1472B Fair Division
Link: https://codeforces.com/problemset/problem/1472/B
Compiler Used: MS C++ 2017
Time: 77ms
Memory: 8KB
*/

#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		std::cin >> n;
		int temp;
		int W = 0;
		for (int j = 0; j < n; j++)
		{
			std::cin >> temp;
			W += temp;
		}
		if (n % 2 == 0)
		{
			if (W % 2 == 0)
				std::cout << "YES" << std::endl;
			else
				std::cout << "NO" << std::endl;
		}
		else
		{
			if (W % 2 == 0)
			{
				if (W % n == 0)
					std::cout << "NO" << std::endl;
				else
					std::cout << "YES" << std::endl;
			}
			else
				std::cout << "NO" << std::endl;
		}
	}		
}