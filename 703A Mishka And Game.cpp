/*
Problem: 703A Mishka And Game
Link: https://codeforces.com/problemset/problem/703/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 12KB
*/

#include <iostream>

int main()
{
	int n, c, m, cc = 0, cm = 0;
	std::cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		std::cin >> m >> c;

		if (m > c)
			cm++;
		else if (c > m)
			cc++;
	}

	if (cm > cc)
		std::cout << "Mishka" << std::endl;
	else if (cc > cm)
		std::cout << "Chris" << std::endl;
	else
		std::cout << "Friendship is magic!^^" << std::endl;
}