/*
Problem: 486A Calculating Function
Link: https://codeforces.com/problemset/problem/486/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>
 
int main()
{
	long long n, sum = 0;
	std::cin >> n;
	if(n%2==0)
	{
		n = n / 2;
		sum = n;
	}
	else
	{
		n = (n + 1) / 2;
		sum = -1*n;
	}
	std::cout << sum;
}