/*
Problem: 758A Holiday Of Equality
Link: https://codeforces.com/problemset/problem/758/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include <iostream>
#include<vector>
#include<algorithm>

int main()
{
	int k, n, temp, count = 0;
	std::vector<int> X;
	
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		X.push_back(temp);
	}
	
	std::sort(X.begin(), X.end());
	k = X[n - 1];

	for (int i = 0; i < n; i++)
	{
		temp = k - X[i];
		count += temp;
	}
	X.clear();
	std::cout << count;
	
}