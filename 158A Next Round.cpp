/*
Problem: 158A Next Round
Link: https://codeforces.com/contest/158/problem/A
Compiler Used: MS C++ 2017
Time: 30ms
Memory: 8KB
*/

#include<iostream>
#include<vector>
 
int main()
{
    int n, k;
    int count = 0;
    std::cin >> n>>k;
    std::vector<int> scores;
    int temp;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        scores.push_back(temp);
    }
    int q = scores[k-1];
    for (int i = 0; i < n; i++)
    {
        if (scores[i] > 0)
        {
            if (scores[i] >= q)
                count++;
        }
 
    }
    std::cout << count;
}