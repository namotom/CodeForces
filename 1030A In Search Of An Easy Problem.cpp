/*
Problem: 1030A In Search Of An Easy Problem
Link: https://codeforces.com/problemset/problem/1030/A
Compiler Used: MS C++ 2017
Time: 31ms
Memory: 8KB
*/

#include<iostream>
 
int main()
{
	int n, temp, sum = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		sum += temp;
	}
	(sum == 0) ? std::cout << "EASY" : std::cout << "HARD";
}