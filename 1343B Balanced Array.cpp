/*
Problem: 1343B Balanced Array
Link: https://codeforces.com/problemset/problem/1343/B
Compiler Used: MS C++ 2017
Time: 109ms
Memory: 8KB
*/

#include <iostream>

int main()
{
	int t, n,multiple, S, temp;
	std::cin >> t;

	for (int i = 1; i <= t; i++)
	{
		std::cin >> n;

		if (n % 4 != 0)
		{
			std::cout << "NO" << std::endl;
		}
		else
		{
			std::cout << "YES" << std::endl;
			multiple = n / 4;
			S = 0;

			//1st Half Even
			for (int j = 0; j < n / 2; j++)
				std::cout << (j + 1) * 2<< " ";
				
			int skipLow = n - 1;
			int skipUp = skipLow + (multiple - 1) * 2;
			
			//2nd Half Odd
			for (int j = 0; j < (n / 2) + multiple; j++)
			{
				temp = (j * 2) + 1;
				if (temp >= skipLow && temp <= skipUp)
					S++;
				else
					std::cout << temp << " ";
			}

			std::cout << std::endl;
		}
	}
}