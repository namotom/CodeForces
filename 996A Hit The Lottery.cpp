/*
Problem: 996A Hit The Lottery
Link: https://codeforces.com/problemset/problem/996/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 16KB
*/

#include<iostream>

int main()
{
	long n;
	int x, y, z, a, b, count;
	std::cin >> n;
	
	x = n / 100;
	n = n % 100;
	y = n / 20;
	n = n % 20;
	z = n / 10;
	n = n % 10;
	a = n / 5;
	b = n % 5;
	
	count = x + y + z + a + b;
	std::cout << count;
}