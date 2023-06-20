/*
Problem: 959A Mahmoud And Ehab And The Even-Odd Game
Link: https://codeforces.com/problemset/problem/959/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	(n % 2 == 0) ? std::cout << "Mahmoud" : std::cout << "Ehab";
} 