/*
Problem: 1348A Pheonix And Balance
Link: https://codeforces.com/problemset/problem/1348/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 4KB
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n, t;
	std::vector<int> coins;
	std::cin >> t;

	for(int i=1;i<=30;i++)
		coins.push_back(std::pow(2, i));

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;

		int S1 = coins[n - 2], S2 = coins[n - 1];

		n = n - 2;
		for (int j = 0; j <n; j++)
		{
			(j<n/2)? S2 += coins[j]:S1 += coins[j];
		}
		std::cout << std::abs(S1 - S2) << std::endl;
		
	}
	coins.clear();
}