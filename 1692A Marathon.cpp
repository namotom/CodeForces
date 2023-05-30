/*
Problem: 1692A Marathon
Link: https://codeforces.com/problemset/problem/1692/A
Compiler Used: MS C++ 2017
Time: 61ms
Memory: 12KB
*/

#include <iostream>

int main()
{

	int t,a,b,c,d;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >>a>>b>>c>>d;
		int temp = 0;
		if (a < b)
			temp++;
		if (a < c)
			temp++;
		if (a < d)
			temp++;

		std::cout << temp << std::endl;
	}
}