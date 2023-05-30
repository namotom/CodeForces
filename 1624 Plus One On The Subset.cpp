/*
Problem: 1624A Plus One On The Subset
Link: https://codeforces.com/problemset/problem/1624/A
Compiler Used: MS C++ 2017
Time: 483ms
Memory: 0KB
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int n, t, c;
	std::vector<int> A;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::cin >> c;
			A.push_back(c);
		}

		std::sort(A.begin(), A.end());

		std::cout << A[n - 1] - A[0] << std::endl;
		A.clear();
	}

}