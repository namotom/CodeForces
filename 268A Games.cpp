/*
Problem: 268A Games
Link: https://codeforces.com/problemset/problem/268/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 8KB
*/

#include<iostream>
#include<vector>

int main()
{
	int n, j, i = 0, count = 0;
	std::vector<int> X;
	std::cin >> n;
	
	for (i = 0; i < n; i++)
	{
		int xh, xg;
		std::cin >> xh>>xg;
		X.push_back(xh);
		X.push_back(xg);
	}
	
	for(i = 0; i < 2*n; i+=2)
		for (j = 1;j < 2*n ; j+=2)
				if (X[i]==X[j])
					count++;
	
	std::cout << count;
}