#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void minmax(int *arr,int *min,int *max,int n)
{
    int x=0;
    int y=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<y)y=arr[i];
        if(arr[i]>x)x=arr[i];
    }
    *min=y;
    *max=x;
}
int main()
{
    int min,max;

    int arr[]={2,3,1,4,5,6,7,8,10,9};
    minmax(arr,&min,&max,10);
    
    cout<<min<<endl<<max<<endl;
}
