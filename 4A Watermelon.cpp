/*
Problem: 4A Watermelon
Link: https://codeforces.com/problemset/problem/4/A
Compiler Used: MS C++ 2017
Time: 62ms
Memory: 3656KB
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
        {
            if(n-2==0)
                cout<<"NO";
            else
                cout<<"YES";
        }
    else
        cout<<"NO";
}