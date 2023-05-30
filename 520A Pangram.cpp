/*
Problem: 520A Pangram
Link: https://codeforces.com/problemset/problem/520/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>
#include<string>

int main()
{
	std::string S;
	int n, i = 0, count = 0;
	std::cin >> n >> S;
	
	for(i = 0; i < n; i++)
	{
		if ((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z'))
		{
			for (int j = i + 1;j < n ; j++)
				if ((S[i] == S[j]) || (S[i] == S[j] + 32) || (S[i] == S[j] - 32))
				{
					S[j] = '_';
				}
			count++;
		}
	}
	(count>=26)? std::cout << "YES":std::cout<<"NO";
}