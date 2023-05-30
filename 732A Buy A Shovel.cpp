/*
Problem: 732A Buy A Shovel
Link: https://codeforces.com/problemset/problem/732/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>

int main()
{
	int k,r,count=0;
	std::cin >> k >> r;
	int i = 1;
	while (count == 0)
	{
		if ((i * k - r) % 10 == 0 || (i * k) % 10 == 0)
			count = i;
		i++;
	}
	
	std::cout << count;
}