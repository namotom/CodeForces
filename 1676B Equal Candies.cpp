/*
Problem: 1676B Equal Candies
Link: https://codeforces.com/problemset/problem/1676/B
Compiler Used: MS C++ 2017
Time: 46ms
Memory: 8KB
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int t, n, temp, ma, c;
	std::vector<int> a;

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;

		for (int j = 0; j < n; j++)
		{
			std::cin >> temp;
			a.push_back(temp);
		}
		ma = *min_element(a.begin(), a.end());
		
		c = 0;

		for (int j = 0; j < n; j++)
			c += a[j] - ma;

		std::cout << c << std::endl;
		a.clear();
	}
}