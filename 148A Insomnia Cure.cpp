/*
Problem: 148A Insomnia Cure
Link: https://codeforces.com/problemset/problem/148/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
 
int main()
{
	int l, k, m, n, d, i, count = 0;
		
	std::cin >> k >> l >> m >> n >> d;
	
	for (i = 0; i < d; i++)
		if (((i + 1) % k == 0) || ((i + 1) % l == 0) || ((i + 1) % m == 0) || ((i + 1) % n == 0))
			count++;
	
	std::cout << count;
}