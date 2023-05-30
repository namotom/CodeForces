/*
Problem: 1328A Divisibilty Problem
Link: https://codeforces.com/problemset/problem/1328/A
Compiler Used: MS C++ 2017
Time: 61ms
Memory: 200KB
*/

#include<iostream>
#include<vector>

int main()
{
	int n;
	long a, b;
	std::vector<long> X;
	
	std::cin >> n;
	for(int i=0;i<n;i++)
	{
		std::cin >> a >> b;
		X.push_back(a);
		X.push_back(b);
	}
	
	for (int i = 0; i < 2*n; i+=2)
	{
		(X[i] % X[i+1] == 0) ? std::cout << 0 : std::cout << (X[i+1] - (X[i] % X[i+1]));
		std::cout << std::endl;
	}
}