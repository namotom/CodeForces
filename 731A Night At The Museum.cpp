/*
Problem: 731A Night At The Museum
Link: https://codeforces.com/problemset/problem/731/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 20KB
*/

#include<iostream>
#include<string>
#include<vector>

int main()
{
	std::string n;
	std::vector<int> pos;
	pos.push_back(0);

	std::cin >> n;

	for (int i = 0; i < n.length(); i++)
	{
		pos.push_back(n[i] - 97);
	}

	int D = 0, d1 = 0, d2 = 0;

	for (int i = 0; i < n.length(); i++)
	{
		int begin = pos[i];
		int end = pos[i + 1];

		if (end > begin)
		{
			d1 = end - begin;
			d2 = 0;
			while (end != begin)
			{
				end = (end + 1) % 26;
				d2++;
			}
		}
		else
		{
			d1 = begin - end;
			d2 = 0;
			while (end != begin)
			{
				begin = (begin + 1) % 26;
				d2++;
			}
		}

		(d1 < d2) ? D += d1 : D += d2;
	}
	std::cout << D << std::endl;
	pos.clear();
} 