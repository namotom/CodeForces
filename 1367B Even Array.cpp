/*
Problem: 1367B Even Array
Link: https://codeforces.com/problemset/problem/1367/B
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include <iostream>

int main()
{
	int t, n, j, temp, c1, c2,count;
	std::cin >> t;
	for (int i = 1; i <= t; i++)
	{
		std::cin >> n;
		
		c1 = 0;
		c2 = 0;

		for (j = 0; j < n; j++)
		{
			std::cin >> temp;

			if (temp % 2 == 0 && j % 2 == 1)
				c1++;
			else if (j % 2 == 0 && temp % 2 == 1)
				c2++;
		}
		
		(c1==c2) ? count = c2 : count = -1;

		std::cout << count << std::endl;
	}
}