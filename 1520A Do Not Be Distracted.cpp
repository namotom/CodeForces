/*
Problem: 1520A Do Not Be Disrtacted
Link: https://codeforces.com/problemset/problem/1520/A
Compiler Used: MS C++ 2017
Time: 31ms
Memory: 12KB
*/

#include <iostream>
#include<string>

int main()
{
	int t, n, c;
	char t1, t2;
	std::string S;
	std::cin >> t;

	for (int i = 1; i <= t; i++)
	{
		std::cin >> n;
		std::cin >> S;
		c = 0;
		for (int j = 0; j < n; j++)
		{
			if (c == 0)

			{
				int index = j;
				for (int k = j + 1; k < n; k++)
				{
					if (S[j] == S[k])
					{
						if (k == index + 1)
							index = k;

						else
						{
							c = 1;
							break;
						}
					}
				}
			}
			else
				break;
		}

		(c == 0) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
	}
}