/*
Problem: 472A Design Tutorial Learn From Math
Link: https://codeforces.com/problemset/problem/472/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include <iostream>

int composite(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			return 1;
	return 0;
}

int main()
{
	int t, x;
	std::cin >> t;
	
	for (x = 4; x <=t-4; x++)
	{
		if(composite(x)+composite(t-x)==2)
		{
			std::cout << x << " " << t-x << std::endl;
			break;
		}
	}
}