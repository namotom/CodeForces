/*
Problem: 492A Vanya And Cubes
Link: https://codeforces.com/problemset/problem/492/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 16KB
*/

#include<iostream>
#include<vector>

int main()
{
	int b,c=0,r=0,S=0;
	std::vector<int> A;

	while (S <= 10000)
	{
		r += c;
		S += r;
		A.push_back(S);
		c++;
	}
	
	std::cin >> b;

	for (int i = 0; i < c-1; i++)
	{
		if (A[i] <= b && A[i + 1] > b)
		{
			std::cout << i << std::endl;
		}
	}
	A.clear();
}