/*
Problem: 231A Teams
Link: https://codeforces.com/problemset/problem/231/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 12KB
*/

#include<iostream>
 
int main()
{
    int n;
    int count = 0;
    int P, V, T;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> P >> V >> T;
        if ((P + V + T) >= 2)
            count++;
 
    }
    std::cout << count;
}