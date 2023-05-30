/*
Problem: 431A Black Square
Link: https://codeforces.com/problemset/problem/431/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 288KB
*/

#include <iostream>
#include <string>

int main()
{
	int A1, A2, A3, A4, l, W;
	std::string S;
	std::cin >> A1 >> A2 >> A3 >> A4;
	std::cin >> S;
	l = S.length();
	W = 0;
	for (int i = 0; i < l; i++)
	{
		if (S[i] == *"1")
			W += A1;
		else if (S[i] == *"2")
			W += A2;
		else if (S[i] == *"3")
			W += A3;
		else
			W += A4;
	}
	std::cout << W;
}