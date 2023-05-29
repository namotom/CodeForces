/*
Problem: 112A Peyta And Strings
Link: https://codeforces.com/problemset/problem/112/A
Compiler Used: MS C++ 2017
Time: 60ms
Memory: 12KB
*/

#include<iostream>
#include<string>
 
int main()
{
	std::string S1, S2;
	int l,l1,l2;
	std::cin>>S1 >> S2;
	l1 = S1.length();
	l2 = S2.length();
	(l1 >= l2) ? l = l1 : l2;
	for (int i = 0; i < l; i++)
	{
		if (S1[i] >= 'A' && S1[i] <= 'Z')
			S1[i] += 32;
		if (S2[i] >= 'A' && S2[i] <= 'Z')
			S2[i] += 32;
 
		if (S1[i] > S2[i])
		{
			std::cout << 1;
			return 0;
			//break;
		}
		else if (S1[i] < S2[i])
		{
			std::cout << -1;
			return 0;
			//break;
		}
	}
	std::cout << 0;
}