/*
Problem: 469A I Wanna Be The Guy
Link: https://codeforces.com/problemset/problem/705/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n, p, q, i = 0, count = 0;
	std::vector<int> X;
	
	std::cin >> n;
	
	std::cin >> p;
	for (i = 0; i < p; i++)
	{
		int x;
		std::cin >> x;
		X.push_back(x);
	}

	std::cin >> q;
	for (i = 0; i < q; i++)
	{
		int y;
		std::cin >> y;
		X.push_back(y);
	}

	sort(X.begin(), X.end());
	
	for (i = 0; i < q + p; i++)
	{
		if (X[i] > 0)
		{
			for (int j = i + 1; j < p + q; j++)
			{
				if (X[i] == X[j])
				{
					X[j] = 0;
				}
			}
		}
	}
	
	for (i = 0; i < p + q; i++)
	{
		if (X[i] > 0)
		{
			count++;
		}
	}
	X.clear();
    
	if (count == n)
		std::cout << "I become the guy.";
	else
		std::cout << "Oh, my keyboard!";
}