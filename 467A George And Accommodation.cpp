/*
Problem: 467A George And Accommodation
Link: https://codeforces.com/problemset/problem/467/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include<iostream>
 
int main()
{
	int n, p,q,rooms=0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> p >> q;
		if (q-p>=2)
			rooms++;
	}
	std::cout << rooms;
}