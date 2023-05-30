/*
Problem: 490A Team Olympiad
Link: https://codeforces.com/problemset/problem/490/A
Compiler Used: MS C++ 2017
Time: 46ms
Memory: 84KB
*/

#include <iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n, temp;
	int c1 = 0, c2 = 0, c3 = 0, i1 = -1, i2 = -1, i3 = -1;
	
	std::vector<int> X,Y;
	
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		X.push_back(temp);
		Y.push_back(temp);
	}
	
	std::sort(X.begin(), X.end());

	for (int i = 0; i < n; i++)
	{
		if (X[i] == 1)
		{
			if (i1 == -1)
				i1 = i+1;
				
			c1++;
		}
		else if (X[i] == 2)
		{
			if (i2 == -1)
				i2 = i+1;
			
			c2++;
		}
		else
		{
			if (i3 == -1)
				i3 = i+1;
			
			c3++;
		}
	}
	X.clear();
	int m;
	 m = std::min(c1, std::min(c2,c3));
	
	 std::cout << m<<std::endl;
	 if (m == 0)
	 {
		
	 }
	 else
	 {
		for (int i = 0; i < m; i++)
		{
			c1 = 0; c2 = 0; c3 = 0;
			for (int j = 0; j < n; j++)
			{
				if (Y[j] == 1 && c1 == 0)
				{
					c1=1;
					Y[j] = 0;
					std::cout << j + 1 << " ";
				}
				else if (Y[j] == 2 && c2 == 0)
				{
					c2=1;
					Y[j] = 0;
					std::cout << j + 1 << " ";
				}
				else if (Y[j] == 3 && c3 == 0)
				{
					c3=1;
					Y[j] = 0;
					std::cout << j + 1<<" ";
				}
			}
			std::cout << std::endl;
		}
	 }
	Y.clear();
}