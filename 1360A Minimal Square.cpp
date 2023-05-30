/*
Problem: 1360A Minimal Swaps
Link: https://codeforces.com/problemset/problem/1360/A
Compiler Used: MS C++ 2017
Time: 46ms
Memory: 8KB
*/

#include <iostream>

int main()
{
	int n, a,b, min, max;
	std::cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		std::cin >> a >> b;

		(a >= b) ? min = b : min = a;
		(a >= b) ? max = a : max = b;
		
		if (2 * min >= max)
			std::cout << 4 * min * min << std::endl;
		else
			std::cout << max * max << std::endl;
	}
}
