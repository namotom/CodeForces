/*
Problem: 59A Word
Link: https://codeforces.com/problemset/problem/59/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 8KB
*/

#include<iostream>
#include<string>
 
int main()
{
	std::string s;
	std::cin >> s;
	int len = s.size();
	int countU=0, countL=0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			countU++;
		else if (s[i] >= 'a' && s[i] <= 'z')
			countL++;
	}
	if (countU > countL)
		for (int i = 0; i < len; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i]= s[i] - 32;
		}
	else
		for (int i = 0; i < len; i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
		
	std::cout<<s;	
}