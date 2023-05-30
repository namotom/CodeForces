/*
Problem: 677 Translation
Link: https://codeforces.com/problemset/problem/677/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 16KB
*/

#include<iostream>
#include<vector>
 
int main()
{
	int n, h,width=0;
	std::vector<int> a;
	
	std::cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		a.push_back(temp);
	}
 
	for (int i = 0; i <n; i++)
		(a[i] <= h) ? width++ : width += 2;
	
	std::cout << width;
}