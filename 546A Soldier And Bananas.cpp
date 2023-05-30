/*
Problem: 546A Soldier And Bananas
Link: https://codeforces.com/problemset/problem/546/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/

#include<iostream>
 
int main()
{
	int k,n,w,borrow;
	std::cin >> k>>n>>w;
	int Amount = ((w * (w + 1) * k) / 2);
	if (Amount > n)
		borrow = Amount - n;
	else
		borrow = 0;
	std::cout<< borrow;	
}