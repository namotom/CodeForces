/*
Problem: 1283A Minutes Before The New Year
Link: https://codeforces.com/problemset/problem/1283/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 4KB
*/

#include<iostream>

int main()
{
	int h,m,t;
	std::cin >>t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> h >> m;
		std::cout << (23 - h) * 60 + (60 - m) << std::endl;
	}
}