/*
Problem: 381A Sereja And Dima
Link: https://codeforces.com/problemset/problem/381/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 20KB
*/

#include <iostream>
#include <vector>

int main()
{
	int N,temp,S,D,low,up;
	std::vector<int> Cards;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> temp;
		Cards.push_back(temp);
	}
	low = 0;
	up = N - 1;
	S = 0;
	D = 0;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
		{
			if (Cards[low] > Cards[up])
			{
				S += Cards[low];
				low++;
			}
			else
			{
				S += Cards[up];
				up--;
			}
		}
		else
		{
			if (Cards[low] > Cards[up])
			{
				D += Cards[low];
				low++;
			}
			else
			{
				D += Cards[up];
				up--;
			}
		}
	}
	std::cout << S << " " << D;
	Cards.clear();
}