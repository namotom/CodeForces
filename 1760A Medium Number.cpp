/*
Problem: 1760A Medium Number
Link: https://codeforces.com/problemset/problem/1760/A
Compiler Used: MS C++ 2017
Time: 61ms
Memory: 12KB
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int t, a;
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

		std::sort(A.begin(), A.end());

		std::cout << A[1]<<std::endl;
		A.clear();
	}
}