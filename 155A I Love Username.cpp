/*
Problem: 155A I Love Username
Link: https://codeforces.com/problemset/problem/155/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
#include<vector>

int main()
{
	int n, min, max, count = 0;
	std::vector<int> X;
	
	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		X.push_back(x);
	}

	min = X[0];
	max = X[0];
	
	for (int i = 0; i < n; i++)
	{
		if (X[i] > max)
		{
			count++;
			max = X[i];
		}
		else if (X[i] < min)
		{
			count++;
			min = X[i];
		}
	}
	std::cout << count;
}