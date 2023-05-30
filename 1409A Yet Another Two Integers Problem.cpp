/*
Problem: 1409A Yet Another Two Integers Problem
Link: https://codeforces.com/problemset/problem/1309/A
Compiler Used: MS C++ 2017
Time: 109ms
Memory: 8KB
*/

#include <iostream>
#include<vector>
#include<algorithm>

int main() 
{
	int t, condition, count;
	std::cin >> t;
	for (int i = 1; i <= t; i++)
	{
		count = 0;
		std::vector<int> X(2);
		std::cin >> X[0] >> X[1];

		sort(X.begin(), X.end());
		
		condition = X[1] - X[0];
		if (condition == 0)
			count = 0;
		else
		{
			for (int k = 10; k >= 1; k--)
			{
				if (condition / k != 0)
					count +=condition/k;
				condition %= k;
			}
		}
		std::cout << count << std::endl;
	}
	
}