/*
Problem: 935A Fafa And His Company
Link: https://codeforces.com/problemset/problem/935/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>

int main()
{
	int n, count = 1;
	std::cin >> n;
	for (int i = 2; i <= n / 2; i++)
	{
		if ((n - i) % i == 0)
			count++;
	}
	std::cout << count;
}