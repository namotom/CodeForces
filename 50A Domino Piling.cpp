/*
Problem: 50A Domino Piling
Link: https://codeforces.com/problemset/problem/50/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
 
int main()
{
    int M, N;
    std::cin >> M>>N;
    if ((M * N) % 2 == 0)
        std::cout << (M * N) / 2;
    else
        std::cout << ((M * N) - (M * N) % 2) / 2;
}