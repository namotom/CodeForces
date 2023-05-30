/*
Problem: 1154A Restoring Three Numbers
Link: https://codeforces.com/problemset/problem/1154/A
Compiler Used: MS C++ 2017
Time: 0ms
Memory: 8KB
*/

#include <iostream>
#include<vector>
#include<algorithm>

int main() 
{
	std::vector<int> X(4);
	for (int i = 0; i < 4; ++i)
		std::cin >> X[i];
	
	sort(X.begin(), X.end());
	
	std::cout << X[3] - X[0] << " " << X[3] - X[1] << " " << X[3] - X[2];
}