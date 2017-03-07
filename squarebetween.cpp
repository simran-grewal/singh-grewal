#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(int a,int b)
{
   int c=floor(sqrt(b))-ceil(sqrt(a))+1;
    return c;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<find(a,b);
}
