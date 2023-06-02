/*
Problem: 707A Brain's Photos
Link: https://codeforces.com/problemset/problem/707/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 32KB
*/

#include<iostream>
#include<vector>

int main()
{
	int n, m,t=0;
	std::vector<char> A;
	std::cin >> n >> m;

	n = n * m;
	for (int i = 0; i < n; i++)
	{
		char temp;
		std::cin >> temp;
		A.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		if (A[i] == 'C' || A[i] == 'Y' || A[i] == 'M')
		{
			t = 1;
			break;
		}
	}
	(t == 1)? std::cout << "#Color" << std::endl : std::cout << "#Black&White" << std::endl;
	A.clear();
}