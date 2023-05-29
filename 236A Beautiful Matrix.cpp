/*
Problem: 236A Beautiful Matrix
Link: https://codeforces.com/problemset/problem/236/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 8KB
*/
#include<iostream>
#include<cmath>
 
int main()
{
    int a, b, c, d, e;
    int matrix[5][5];
    int count = 0;
    int x, y;
    for (int R = 0; R < 5; R++)
    {
        std::cin >> a >> b >> c >> d >> e;
        if (a == 1)
        {
            x = R;
            y = 0;
        }
        else if (b == 1)
        {
            x = R;
            y = 1;
        }
        else if (c == 1)
        {
            x = R;
            y = 2;
        }
        else if (d == 1)
        {
            x = R;
            y = 3;
        }
        else if (e == 1)
        {
            x = R;
            y = 4;
        }
        matrix[R][0] = a;
        matrix[R][1] = b;
        matrix[R][2] = c;
        matrix[R][3] = d;
        matrix[R][4] = e;
    }
    count = abs(2 - x) + abs(2 - y);
 
    std::cout << count;
}