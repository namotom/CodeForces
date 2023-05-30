/*
Problem: 750A New Year And Hurry
Link: https://codeforces.com/problemset/problem/750/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>

int main()
{
	int n, k, S = 0, count = 0;
	
	std::cin >> n >> k;
	
	for (int i = 1; i <= n; i++)
	{
		S += 5*i;
		if (240-k-S>=0)
			count++;
	}

	std::cout << count;
}