/*
Problem: 1399A Remove Smallest
Link: https://codeforces.com/problemset/problem/1399/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

int main()
{
	int n, t, x, count;
	std::vector<int> X;
	
	std::cin >> t;
	for (int i = 1; i <= t; i++)
	{
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::cin >> x;
			X.push_back(x);
		}
		
		sort(X.begin(), X.end());
		
		for (int j = 0; j < n; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				int a = X[j], b = X[k];
				if (abs(a - b) <= 1)
				{
					X[j] = 0;
					break;
				}
			}
		}

		count = 0;
		for (int j = 0; j < n; j++)
			if (X[j] != 0)
				count++;

		(count == 1) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
		X.clear();
	}
}