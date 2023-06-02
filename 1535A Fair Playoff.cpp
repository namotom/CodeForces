/*
Problem: 1535A Fair Playoff
Link: https://codeforces.com/problemset/problem/1535/A
Compiler Used: MS C++ 2017
Time: 77ms
Memory: 8KB
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int t, a,m1,m2,f1,f2;
	std::vector<int> A;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> a;
		A.push_back(a);
		std::cin >> a;
		A.push_back(a);
		std::cin >> a;
		A.push_back(a);
		std::cin >> a;
		A.push_back(a);

		f1 = std::max(A[0], A[1]);
		f2 = std::max(A[2], A[3]);

		std::sort(A.begin(), A.end());

		m1 = A[3];
		m2 = A[2];

		if ((f1 == m1 || f1 == m2) && (f2 == m1 || f2 == m2))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
		A.clear();
	}
}