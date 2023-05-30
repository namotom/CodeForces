/*
Problem: 1703A Yes Or Yes
Link: https://codeforces.com/problemset/problem/1703/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include <iostream>
#include <string>

int main()
{

	int t;
	char n[4];
	char key[] = "YES";
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		if (_strcmpi(n,key)==0)
			std::cout << "YES"<<std::endl;
		else
			std::cout << "NO"<<std::endl;
	}
}