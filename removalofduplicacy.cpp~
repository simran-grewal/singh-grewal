#include<bits/stdc++.h>
using namespace std;
char * check(char *arr)
{
    int count[256]={0};
    int i=0,j=0;
   while(arr[i])
    {
        if(count[arr[i]]==0)
        {
            count[arr[i]]=1;
            arr[j]=arr[i];j++;
        }
            i++;    
    }
    arr[j]='\0';
      return arr; 
}
int main()
{
    char arr[]="geeksforgeeks";
    cout<<check(arr);

}


