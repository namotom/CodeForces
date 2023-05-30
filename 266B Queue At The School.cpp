/*
Problem: 266B Queue At The School
Link: https://codeforces.com/problemset/problem/266/B
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
#include<string>
 
int main()
{
	int n, t;
	std::string S;
	std::cin >> n >> t;
	std::cin >> S;
	
	while (t > 0)
	{
		for (int i = 0; i <n;)
		{
			if (S[i] == 'B' && S[i + 1] == 'G')
			{
				char temp = S[i];
				S[i] = S[i + 1];
				S[i + 1] = temp;
				i = i + 2;
			}
			else
				i++;
		}
		t--;
	}
	
	std::cout << S;
}