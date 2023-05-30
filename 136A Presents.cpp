/*
Problem: 136A Presents
Link: https://codeforces.com/problemset/problem/136/A
Compiler Used: MS C++ 2017
Time: 62ms
Memory: 12KB
*/

#include<iostream>
 
int main()
{
	int Arr[101], Arr_[101], n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> Arr[i];
		Arr_[Arr[i] - 1] = i + 1;
	}
	for (int i = 0; i < n; i++)
		std::cout << Arr_[i]<<" ";
}