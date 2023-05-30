/*
Problem: 266A Stones On The Table
Link: https://codeforces.com/problemset/problem/266/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
 
char str[51];
int N;
int main()
{
	std::cin >> N;
	std::cin >> str;
	int count = 0;
	for (int i = 0; i < N; i++)
		if (str[i] == str[i + 1])
			count++;
	std::cout<< count;	
}