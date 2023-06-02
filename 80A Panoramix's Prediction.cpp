/*
* Problem: 80A Panoramix's Prediction
Link: https://codeforces.com/problemset/problem/80/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>

int main()
{
	int n, m;
	int key[] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
	int in = 0, im = 0;
	std::cin >> n>>m;
	for (int i = 0; i < 15; i++)
	{
		if (n == key[i])
			in = i;
		if (m == key[i])
			im = i;
	}
	if(im==in+1)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}