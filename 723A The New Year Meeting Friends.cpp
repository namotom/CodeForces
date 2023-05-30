/*
Problem: 723A The New Year: Meeting Friends
Link: https://codeforces.com/problemset/problem/723/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include <iostream>
#include<vector>
#include<algorithm>

int main()
{
	int count;

	std::vector<int> X(3);
	std::cin >> X[0] >> X[1] >> X[2];

	sort(X.begin(), X.end());

	count = X[2]-X[0];
	std::cout << count;
}