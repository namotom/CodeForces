/*
Problem: 977A Wrong Subtraction
Link: https://codeforces.com/problemset/problem/977/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include<iostream>
 
int main()
{
	int n, k;
	std::cin >> n>>k;
	while(k>0)
	{
		if (n % 10 == 0)
			n = n / 10;
		else
			n--;
		k--;
	}
	std::cout << n;
}