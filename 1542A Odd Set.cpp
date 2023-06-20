/*
Problem: 1542A Odd Set
Link: https://codeforces.com/problemset/problem/1542/A
Compiler Used: MS C++ 2017
Time: 31ms
Memory: 8KB
*/

#include<iostream>

int main()
{
	int n, t;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		int Codd = 0, Ceven = 0;
		std::cin >> n;
		for (int j = 0; j < 2 * n; j++)
		{
			int temp;
			std::cin >> temp;
			(temp % 2 == 0) ? Ceven++ : Codd++;
		}
		(Ceven == Codd) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
	}
}