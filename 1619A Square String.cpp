/*
Problem: 1619A Square String?
Link: https://codeforces.com/problemset/problem/1619/A
Compiler Used: MS C++ 2017
Time: 0ms
Memory: 4KB
*/

#include<iostream>
#include<string>

int main()
{
	int t, l, c;
	std::string k;
	std::cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		std::cin >> k;

		l = k.length();
		if (l % 2 == 1)
		{
			std::cout << "NO" << std::endl;
		}
		else
		{
			c = 1;
			l = l / 2;
			for (int j = 0; j < l; j++)
				if (k[j] != k[j + l])
					c = 0;

			if (c==1)
				std::cout << "YES" << std::endl;
			else
				std::cout << "NO" << std::endl;
		}
	}
}