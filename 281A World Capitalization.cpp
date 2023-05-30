/*
Problem: 281A World Capitalization
Link: https://codeforces.com/problemset/problem/281/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 8KB
*/

#include<iostream>
 
int main()
{
	char S1[1001];
	std::cin >> S1;
	if(S1[0]>='a'&& S1[0]<='z')
		S1[0] -= 32;
	std::cout << S1;
}