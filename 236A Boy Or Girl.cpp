/*
Problem: 236A Boy Or Girl
Link: https://codeforces.com/problemset/problem/236/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
#include<algorithm>
 
char str[101];
int main()
{
	std::cin >> str;
	int len = 101;
	int count = 0;
 
	std::sort(str, str + len);
	
	for (int i = 1;i<len; i++)
		if (str[i] != str[i - 1])
			count++;
	
	if (count % 2 == 0)
		std::cout << "CHAT WITH HER!";
	else
		std::cout << "IGNORE HIM!";
}