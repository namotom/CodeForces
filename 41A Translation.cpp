/*
Problem: 41A Translation
Link: https://codeforces.com/problemset/problem/41/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
#include<string>
#include<algorithm>
 
int main()
{
	std::string s,t,temp;
	std::cin >> s;
	std::cin >> t;
	std::reverse(s.begin(), s.end());
	
	(s==t)? std::cout << "YES":std::cout<<"NO";
}