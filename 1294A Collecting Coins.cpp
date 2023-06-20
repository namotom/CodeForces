/*
Problem: 1294A Collecting Coins
Link: https://codeforces.com/problemset/problem/1294/A
Compiler Used: MS C++ 2017
Time: 77ms
Memory: 4KB
*/

#include<iostream>
#include<algorithm>

int main()
{
	int t,a,b,c,n;
	std::cin >>t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> a >> b >> c >> n;

		if (a == b && b == c)
		{
			if(n%3==0)
				std::cout << "YES" << std::endl;
			else
				std::cout << "NO" << std::endl;
		}
		else
		{
			int M = std::max(a, std::max(b, c));
			int A = M - a;
			int B = M - b;
			int C = M - c;

			n = n - A - B - C;
			if (n >= 0 && n % 3 == 0)
				std::cout << "YES" << std::endl;
			else
				std::cout << "NO" << std::endl;
		}
		
	}
}