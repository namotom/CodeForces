/*
Problem: 617A Elephant
Link: https://codeforces.com/problemset/problem/617/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>
 
int main()
{
	int n,count=0;
	std::cin >>n;
	for (int i = 5; i >= 1; i--)
	{
		while (n >= i)
		{
			n = n - i;
			count++;
		}
	}
	std::cout<< count;	
}