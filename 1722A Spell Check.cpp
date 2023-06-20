/*
Problem: 1722A Specll Check
Link: https://codeforces.com/problemset/problem/1722/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 0KB
*/

#include<iostream>

int main()
{
	int t, n,count;
	char s[11];

	std::cin >>t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		for (int j = 0; j < n; j++)
			std::cin >> s[j];

		char name[] = { 'T','i','m','u','r' };
		count = 0;
		if (n == 5)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < 6; k++)
				{
					if (s[j] == name[k])
					{
						count++;
						name[k] = 'X';
					}
				}
			}
		}
		
		(count == 5) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
	}
}