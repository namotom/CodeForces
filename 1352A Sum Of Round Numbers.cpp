/*
Problem: 1352A Sum Of Round Numbers
Link: https://codeforces.com/problemset/problem/1352/A
Compiler Used: MS C++ 2017
Time: 108ms
Memory: 128KB
*/

#include<iostream>
#include<vector>
#include<cmath>

int main()
{
	int n,x,count=0;
	std::vector<int> X;
	
	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		X.push_back(x);
	}
	
	for (int i = 0; i < n; i++)
	{
		count = 0;
		x = X[i];
		for (int j = 1; j <= 5; j++)
		{
			if (x > 0)
			{
				if(x % 10 > 0)
					count++;
				x /= 10;
			}
		}
			
		std::cout << count << std::endl;
		x = X[i];
		for (int k = 1; k <=5; k++)
		{
			if (x > 0)
			{
				if (x % 10 > 0)
					std::cout << (x % 10) * pow(10, k - 1) << " ";
				x /= 10;
			}
		}
		std::cout << std::endl;
	}
}