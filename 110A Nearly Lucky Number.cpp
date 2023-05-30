/*
Problem: 110A Nearly Lucky Number
Link: https://codeforces.com/problemset/problem/110/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 8KB
*/

#include<iostream>
 
int main()
{
	long long n;
	int count = 0;
	std::cin >> n;
	
	while (n > 0)
	{
		if (n % 10 == 4 || n % 10 == 7)
			count++;
		n = n / 10;
	}
	(count == 4 || count ==7)? std::cout << "YES": std::cout << "NO";
}