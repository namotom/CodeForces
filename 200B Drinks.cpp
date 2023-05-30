/*
Problem: 200B Drinks
Link: https://codeforces.com/problemset/problem/200/B
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 8KB
*/

#include<iostream>
 
int main()
{
	int n;
	float p = 0.0f;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		float x;
		std::cin >> x;
		p += x;
	}
	p = p / n;
	std::cout << p;
}