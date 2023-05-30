/*
Problem: 344A Magnets
Link: https://codeforces.com/problemset/problem/344/A
Compiler Used: MS C++ 2017
Time: 92ms
Memory: 556KB
*/

#include<iostream>
#include<vector>

int main()
{
	int n, N, correction = -1, sum = 0;
	char pole1, pole2;
	std::vector<char> poles;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> pole1 >> pole2;
		poles.push_back(pole1);
		poles.push_back(pole2);
	}

	N = 2 * n;

	if (n == 1)
	{
		sum++;
		correction++;
	}
	else
	{
		for (int i = 0; i < N - 2; i += 2)
		{
			if (poles[i] != poles[i + 2])
			{
				sum += 2;
				correction++;
			}
		}

	}
	poles.clear();
	std::cout << sum - correction;
}