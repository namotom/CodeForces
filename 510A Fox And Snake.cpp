/*
Problem: 510A Fox And Snake
Link: https://codeforces.com/problemset/problem/510/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>

int main()
{
	int n, m;
	char S[50][50];
	
	std::cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			(i % 2 == 0)?	S[i][j] = '#':S[i][j]='.';
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		if (i % 4 == 1)
			S[i][m - 1] = '#';
		else if (i % 4 == 3)
			S[i][0] = '#';
	}

	for (int i = 0; i < n; i++)
	{
		for(int j=0; j < m; j++)
		{
			std::cout << S[i][j];
		}
		std::cout << std::endl;
	}
}