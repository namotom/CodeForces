/*
Problem: 1676A Lucky
Link: https://codeforces.com/problemset/problem/1676/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include <iostream>

int main()
{
	int t;
	char S[7];
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >>S;

		int t1,t2 = 0;
		t1 = S[0] + S[1] + S[2];
		t2 = S[3] + S[4] + S[5];

		if (t1 == t2)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
}
