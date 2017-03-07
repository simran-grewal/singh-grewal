#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void isort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]={5,6,2,3,14,1};
    isort(arr,6);

    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
}
