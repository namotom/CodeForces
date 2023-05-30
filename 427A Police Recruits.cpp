/*
Problem: 427A Police Recruits
Link: https://codeforces.com/problemset/problem/427/A
Compiler Used: MS C++ 2017
Time: 62ms
Memory: 972KB
*/

#include<iostream>
#include<vector>

int main()
{
	int n, e, police = 0, count = 0;
	std::vector<int> E;
	
	std::cin >> n;
	
	for (int i = 0; i <n; i++)
	{
		std::cin >> e;
		E.push_back(e);
	}
	for (int i = 0; i < n; i++)
		(E[i] + police < 0) ? count++ : police += E[i];
	
	std::cout << count;
}