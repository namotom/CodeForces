/*
Problem: 228A Is Your Horseshoe On The Other Hoof?
Link: https://codeforces.com/problemset/problem/228/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>

int main()
{
	long q, w, e, r;
	long legs[4];
	int min = 0;
	std::cin >> q >> w >> e >> r;
	
	legs[0] = q;
	legs[1] = w;
	legs[2] = e;
	legs[3] = r;
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (legs[i] > 0)
			{
				if (legs[i] == legs[j])
				{
					min++;
					legs[j] = 0;
				}
			}
		}
	}
	
	std::cout << min;
}