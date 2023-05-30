/*
Problem: 1374A Required Remainder
Link: https://codeforces.com/problemset/problem/1374/A
Compiler Used: MS C++ 2017
Time: 296ms
Memory: 12KB
*/

#include <iostream>

int main()
{
	int t, n, x, y, k, r;
	std::cin >> t;
	for (int i = 1; i <= t; i++)
	{
		std::cin >> x >> y >> n;
		
		if (x == 0 || n == 0)
			k = 0;
		else
		{
			k = n;
			int r = k % x;
			if (r == y)
				k = n;
			else if (y > r)
				k = k + y - r - x;
			else
				k = k + y - r;
		}
		std::cout << k << std::endl;
	}
}