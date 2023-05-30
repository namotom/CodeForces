/*
Problem: 1742A Sum
Link: https://codeforces.com/problemset/problem/1742/A
Compiler Used: MS C++ 2017
Time: 46ms
Memory: 8KB
*/

#include <iostream>

int main()
{

	int t,a,b,c;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> a>>b>>c;

		if ((a + b == c) || (a + c == b) || (b + c == a))
			std::cout << "YES"<<std::endl;
		else
			std::cout << "NO"<<std::endl;
	}
}