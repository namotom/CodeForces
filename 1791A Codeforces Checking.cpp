/*
Problem: 1791A Codeforces Checking
Link: https://codeforces.com/problemset/problem/1791/A
Compiler Used: MS C++ 2017
Time: 0ms
Memory: 4KB
*/

#include<iostream>
#include<string>

int main()
{
	int t,count,j;
	char n;
	char key[] = "codefrs";
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		count = 0;
		j = 0;
		while (count == 0 && key[j])
		{
			if (n == key[j])
			{
				count = 1;
				std::cout << "YES" << std::endl;
			}
			j++;
		}
		if (count == 0)
			std::cout << "NO" << std::endl;
	}
}