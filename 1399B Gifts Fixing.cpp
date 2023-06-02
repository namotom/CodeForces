/*
Problem: 1399B Gifts Fixing
Link: https://codeforces.com/problemset/problem/1399/B
Compiler Used: MS C++ 2017
Time: 31ms
Memory: 0KB
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int t, n, temp;
	std::vector<long long> a;
	std::vector<long long> b;
	long long ma, mb, c;

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

		for (int j = 0; j < n; j++)
		{
			std::cin >> temp;
			b.push_back(temp);
		}
		mb = *min_element(b.begin(), b.end());

		c = 0;

		for (int j = 0; j < n; j++)
		{
			long long ta, tb;
			ta = a[j] - ma;
			tb = b[j] - mb;

			if (ta >= tb)
				c += ta;
			else
				c += tb;
		}

		std::cout << c << std::endl;
		a.clear();
		b.clear();
	}
}