/*
Problem: 282A Bit++
Link: https://codeforces.com/problemset/problem/282/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 8KB
*/


#include<iostream>
#include<string>
 
int main()
{
    int N;
    int x = 0;
    std::string line;
    std::string p1 ("++X");
    std::string p2 ("X++");
    std::string m1 ("--X");
    std::string m2 ("X--");
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> line;
        if (line==p1||line==p2)
            x++;
        else if (line == m1 || line == m2)
            x--;
    }
    std::cout << x;
}