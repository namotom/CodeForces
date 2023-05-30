/*
Problem: 581A Vasya And The Hipster
Link: https://codeforces.com/problemset/problem/581/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include<iostream>

int main()
{
	int a, b, c1 = 0, c2 = 0;
	
	std::cin >> a >> b;
	
	while (a+b>=2)
	{
		if (a >0 && b >0)
		{
			a--;
			b--;
			c1++;
		}
		else if (a == 0 && b >= 2)
		{
			b -= 2;
			c2++;
		}
		else if (b == 0 && a >= 2)
		{
			a -= 2;
			c2++;
		}
	}
	
	std::cout << c1 << " " << c2;
}