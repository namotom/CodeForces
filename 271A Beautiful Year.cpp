/*
Problem: 271A Beautiful Year
Link: https://codeforces.com/problemset/problem/271/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 16KB
*/

#include<iostream>
 
int unique(int y)
{
	int H, T, O;
	
	O = y % 10;
	y = y / 10;
	
	T= y % 10;
	y = y / 10;
	
	H = y % 10;
	y = y / 10;
	
	if (H == T || H == O || H == y || T == O || T == y || O == y)
		return 0;
	else
		return 1;
}
 
 
int main()
{
	int y;
	std::cin>>y;
	int c = 0;
	while (c == 0)
	{
		y++;
		c = unique(y);
	}
	std::cout << y;
}