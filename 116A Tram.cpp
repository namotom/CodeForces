/*
Problem: 116A Tram
Link: https://codeforces.com/problemset/problem/116/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 16KB
*/

#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
	int n, a, b,temp=0;
	std::vector<int> capacity;
	std::cin >> n;
	
	for (int i = 0; i <n; i++)
	{
		std::cin >> a >> b;
		temp = temp- a+b;
		capacity.push_back(temp);
	}
	sort(capacity.begin(), capacity.end());
	
	
	std::cout << capacity[n-1];
}