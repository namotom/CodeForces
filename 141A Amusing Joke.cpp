/*
Problem: 141A Amusing Joke
Link: https://codeforces.com/problemset/problem/141/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
#include<string>
#include<algorithm>

int main()
{
	std::string S1, S2, S3;
	std::cin >> S1 >> S2 >> S3;
	
	S1= S1 + S2;
	std::sort(S1.begin(), S1.end());
	std::sort(S3.begin(), S3.end());
	
	(S1==S3) ? std::cout << "YES" : std::cout << "NO";
}