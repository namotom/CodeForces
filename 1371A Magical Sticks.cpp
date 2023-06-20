/*
Problem: 1371A Magical Sticks
Link: https://codeforces.com/problemset/problem/1371/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 4KB
*/

#include<iostream>

int main()
{
	int n,t;
	std::cin >>t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		std::cout << (n+1)/2 << std::endl;
	}
}