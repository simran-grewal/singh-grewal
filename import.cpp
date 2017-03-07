#include<iostream>
using namespace std;
void space(char *str)
{
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }
    
    str[j]='\0';
}
int main()
{
    char str[]="my n am e i ssi mra n";
   // space(str);
    cout<<str;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[]="grewal is simran";
    char *str=str1;
    cout<<str;
}*/
