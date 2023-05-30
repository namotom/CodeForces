/*
Problem: 9A Die Roll
Link: https://codeforces.com/problemset/problem/9/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 16KB
*/

#include <iostream>

int main()
{
	int a,b,t;
	std::cin >> a >> b;

	(a > b)? t = a : t = b;

	if (t==1)
		std::cout << "1/1" << std::endl;
	else if(t==2)
		std::cout << "5/6" << std::endl;
	else if (t==3)
		std::cout << "2/3" << std::endl;
	else if (t == 4)
		std::cout << "1/2" << std::endl;
	else if (t == 5)
		std::cout << "1/3" << std::endl;
	else
		std::cout << "1/6" << std::endl;
}