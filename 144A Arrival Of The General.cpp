/*
Problem: 144A Arrival Of The General
Link: https://codeforces.com/problemset/problem/144/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
#include<vector>

int main()
{
	int n, imax, imin, i, count = 0;
	std::vector<int>X;
	
	std::cin >> n;
	for(i=0;i<n;i++)
	{
		int x;
		std::cin >>x;
		X.push_back(x);
	}
	
	imax = 0;
	imin = n - 1;
	for (i = 0; i < n - 1; i++)
	{
		if (X[imax] < X[i + 1])
			imax = i + 1;
		if (X[imin] > X[n - 2 - i])
			imin = n - 2 - i;
	}
	
	count = abs(imax - 0) + abs(imin - (n - 1));
	if (imax > imin)
		count--;
	std::cout << count;
}