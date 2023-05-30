/*
Problem: 61A Ultra-Fast Mathematician
Link: https://codeforces.com/problemset/problem/61/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>
 
int main()
{
	char s1[101], s2[101], s3[101];
	std::cin >> s1 >> s2;
	
	for (int i = 0; s1[i] != '\0'; i++)
		(s1[i] == s2[i]) ? s3[i] = '0' : s3[i] = '1';
		
	for (int i = 0; s1[i] != '\0'; i++)
		std::cout << s3[i];
}
 