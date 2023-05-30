/*
Problem: 1353B Two Arrays And Swaps
Link: https://codeforces.com/problemset/problem/1353/B
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 4KB
*/

#include <iostream>
#include<algorithm>
#include<vector>

int main()
{
	int t, n, k, temp, j;
	std::vector<int> X, Y;
	std::cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int sum = 0;
		std::cin >> n >> k;
		for (j = 0; j < n; j++)
		{
			std::cin >> temp;
			X.push_back(temp);
		}
		std::sort(X.begin(), X.end());

		for (j = 0; j < n; j++)
		{
			std::cin >> temp;
			Y.push_back(temp);
		}
		std::sort(Y.begin(), Y.end());
		
		j = 0;
		while (k > 0 && j < n)
		{
			if (X[j] < Y[n - j - 1])
				X[j] = Y[n - j - 1];

			k--;
			j++;
		}

		for(j=0;j<n;j++)
			sum += X[j];

		std::cout << sum<<std::endl;
		X.clear();
		Y.clear();
	}
}