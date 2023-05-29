/*
Problem: 339A Helpful Maths
Link: https://codeforces.com/problemset/problem/339/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
#include<string>
 
int main()
{
	std::string S1;
	int l1, min;
	std::cin>>S1;
	l1 = S1.length();
	for (int i = 2; i < l1; i+=2)
	{
		min = S1[i];
		int o = i - 2;
		while (o >= 0 && S1[o] > min)
		{
			S1[o + 2] = S1[o];
			o = o - 2;
		}
		S1[o + 2] = min;
	}
	std::cout << S1<<std::endl;
}