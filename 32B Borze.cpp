/*
Problem: 32B Borze
Link: https://codeforces.com/problemset/problem/32/B
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 8KB
*/

#include <iostream>
#include<string>

int main()
{
	std::string S;
	std::cin >> S;
	int l = S.length();
	for (int i = 0; i < l; )
	{
		if (S[i] == *".")
		{
			std::cout << "0";
			i++;
		}
		else if(S[i]==*"-" && S[i+1]==*".")
		{
			std::cout << "1";
			i += 2;
		}
		else
		{
			std::cout << "2";
			i += 2;
		}
	}
}