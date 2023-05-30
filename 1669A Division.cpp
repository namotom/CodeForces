/*
Problem: 1669A Division
Link: https://codeforces.com/problemset/problem/1669/A
Compiler Used: MS C++ 2017
Time: 31ms
Memory: 4KB
*/

#include <iostream>

int main()
{
	int t;
	int r;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >>r;
		
		if (r>=1900)
			std::cout << "Division 1" << std::endl;
		else if(r<1900 && r>=1600)
			std::cout << "Division 2" << std::endl;
		else if (r < 1600 && r >= 1400)
			std::cout << "Division 3" << std::endl;
		else
			std::cout << "Division 4" << std::endl;
	}
}