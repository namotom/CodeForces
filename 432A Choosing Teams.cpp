/*
Problem: 432A Choosing Teams
Link: https://codeforces.com/problemset/problem/432/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 24KB
*/

#include <iostream>
#include<vector>
#include<algorithm>

int main()
{
	int k, n, temp, count = 0;
	std::vector<int> X;
	
	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		temp += k;
		X.push_back(temp);
	}
	
	std::sort(X.begin(), X.end());
	
	int i = 0;
	while (i < n)
	{
		if (X[i] >= k && X[i] <= 5)
			count++;
		i++;
	}
	X.clear();
	std::cout << count / 3;
	
}