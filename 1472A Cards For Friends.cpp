/*
Problem: 1472A Cards For Friends
Link: https://codeforces.com/problemset/problem/1472/A
Compiler Used: MS C++ 2017
Time: 61ms
Memory: 12KB
*/

#include<iostream>

int main()
{
	int t,n,w,h,count;

	std::cin >>t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> w >> h >> n;

		count = 1;
		while (w % 2 == 0)
		{
			count *= 2;
			w /= 2;
		}
		while (h % 2 == 0)
		{
			count *= 2;
			h /= 2;
		}

		(count >= n) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
	}
}