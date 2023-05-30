/*
Problem: 734A Anton And Danik
Link: https://codeforces.com/problemset/problem/734/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 292KB
*/

#include<iostream>
#include<string>
 
int main()
{
	int n,cA=0,cD=0;
	std::string s;
	std::cin >> n;
	std::cin >> s;
 
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'A')
			cA++;
		else if (s[i] == 'D')
			cD++;
	}
	
	if (cA > cD)
		std::cout << "Anton";
	else if (cA < cD)
		std::cout << "Danik";
	else
		std::cout << "Friendship";
	
}
