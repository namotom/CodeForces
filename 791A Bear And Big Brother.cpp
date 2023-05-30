/*
Problem: 791A Bear And Big Brother
Link: https://codeforces.com/problemset/problem/266/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>
 
int main()
{
	int a, b, count;
	std::cin >> a>>b;
	count = 0;
	while (a<=b)
	{
		a = a * 3;
		b = b * 2;
		count++;
	}
	std::cout<< count;	
}