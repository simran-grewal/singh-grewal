#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int arr[]={1,2,3,2,4,5,3,6,2,4,4,4,2,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int p=0;    
    int *count;
    count=(int *)calloc(200,sizeof(int));
    int j=0;
        for(int i=0;i<n;i++)
        {
            if(count[arr[i]]==0)
            {
                arr[j++]=arr[i];
                count[arr[i]]=1;
            }
            else
            {
                p++;
            }
        }

    for(int i=0;i<n-p;i++)
        cout<<arr[i];
}
