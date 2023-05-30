/*
Problem: 1512A Spy Detected
Link: https://codeforces.com/problemset/problem/1512/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include <iostream>
#include<algorithm>
#include<vector>

int main()
{
	int t, n, temp;
	std::vector<int> X, Y;
	std::cin >> t;
	for (int i = 1; i <= t; i++)
	{
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::cin >> temp;
			X.push_back(temp);
			Y.push_back(temp);
		}
		std::sort(X.begin(), X.end());

		int k;
		if (X[n / 2] - X[0] == 0)
			k = X[n - 1];
		else
			k = X[0];

		X.clear();

		temp = 0;
		for (int j = 0; j < n; j++)
		{
			if (Y[j] == k && temp == 0)
			{
				temp = 1;
				std::cout << j + 1 << std::endl;
			}
		}
		Y.clear();
	}
}