/*
Problem: 71A Way Too Long Words
Link: https://codeforces.com/problemset/problem/71/A
Compiler Used: MS C++ 2017
Time: 15ms
Memory: 24KB
*/
#include<iostream>
#include <vector>
#include<string>
 
int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> str;
    std::string temp;
    //Get All Inputs
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        str.push_back(temp);
    }
 
    //Automation
    for (int i=0; i<n;i++)
    {
        int t = str[i].length();
        if (t <= 10)
            std::cout << str[i] << std::endl;
        else
            std::cout << str[i][0] << t - 2 << str[i][t - 1]<<std::endl;
 
    }
}