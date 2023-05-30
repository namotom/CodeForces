/*
Problem: 443A Anton And Letters
Link: https://codeforces.com/problemset/problem/443/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include<iostream>
#include<string>
#include<vector>

int main()
{
	std::vector<char> S;
	char s;
	int i = 0;
	std::cin >> s;
	S.push_back(s);
	while (S[i] != '}')
	{
		std::cin >> s;
		S.push_back(s);
		i++;
	}

	int count =0, n= S.size();
	for(i = 0; i < n; i++)
	{
		if (S[i] >= 'a' && S[i] <= 'z')
		{
			for (int j = i + 1;j < n - 1; j++)
				if (S[i] == S[j])
					S[j]='X';
			count++;
		}
	}
	std::cout << count;
}