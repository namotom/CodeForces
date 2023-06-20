/*
Problem: 1703B ICPC Balloons
Link: https://codeforces.com/problemset/problem/1703/B
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n, t;
	std::vector<char> s;
	std::cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			char temp;
			std::cin >> temp;
			s.push_back(temp);
		}

		int count = 2;
		std::sort(s.begin(), s.end());
		
		for (int j = 0; j < n-1; j++)
		{
			if (s[j] == s[j + 1])
				count++;
			else
				count += 2;
		}
		std::cout << count << std::endl;

		s.clear();
	}
}