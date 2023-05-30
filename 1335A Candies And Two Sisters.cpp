/*
Problem: 1335A Candies And Two Sisters
Link: https://codeforces.com/problemset/problem/1335/A
Compiler Used: MS C++ 2017
Time: 46ms
Memory: 184KB
*/

#include<iostream>
#include<vector>

int main()
{
	int t = 0;
	long long n,count;
	std::vector<long long> X;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		X.push_back(n);
	}
	for(int i=0;i<t;i++)
	{
		if (X[i] == 1 || X[i] == 2)
			count = 0;
		else if (X[i] % 2 == 0)
			count = X[i] - (X[i] / 2) - 1;
		else
			count= X[i] - (X[i]+1) / 2;
		std::cout << count<<std::endl;
	}
}