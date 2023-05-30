/*
Problem: 1367A Short Substrings
Link: https://codeforces.com/problemset/problem/1367/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include <iostream>
#include<string>

int main()
{
	int t, l;

	std::string a, b;
	std::cin >> t;

	for (int i = 1; i <= t; i++)
	{
		std::cin >> b;
		l = b.size();

		for (int j = 0; j < l; j+=2)
			std::cout << b[j];
		
		std::cout <<b[l-1]<<std::endl;
	}
}