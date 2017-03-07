#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[10][20];
    for(int i=0;i<5;i++)
    cin>>str1[i];
 

    char str[100]={0};
    for(int i=0;i<5;i++)
    {
        strcat(str,str1[i]);
        strcat(str," ");
    }
  
    cout<<str;
}
