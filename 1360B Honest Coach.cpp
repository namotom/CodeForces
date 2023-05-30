/*
Problem: 1360B Honest Coach
Link: https://codeforces.com/problemset/problem/1360/B
Compiler Used: MS C++ 2017
Time: 62ms
Memory: 24KB
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int t, n, g;
	std::vector<int> X;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::cin >> g;
			X.push_back(g);
		}

		std::sort(X.begin(), X.end());

		std::vector<int> D;

		for (int j = 0; j < n -1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				g = X[k] - X[j];
				D.push_back(g);
			}
		}

		std::sort(D.begin(), D.end());


		int m = D[0];
		std::cout << m << std::endl;
		X.clear();
		D.clear();
	}
}