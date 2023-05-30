/*
Problem: 151A Soft Drinking
Link: https://codeforces.com/problemset/problem/151/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include <iostream>
#include<algorithm>

int main()
{
	int n, k, l, c, d, p, nl, np;
	int c1, c2, c3;	
	
	std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	
	c1 = k * l / nl;
	c2 = c * d;
	c3 = p / np;
	
	int m;
	 m = std::min(c1, std::min(c2,c3));
	
	 std::cout << m/n;
}