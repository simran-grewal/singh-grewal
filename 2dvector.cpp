#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector< vector<int>  > V(10,vector<int>(10,0));
    vector< vector<int> > V(10,vector<int >(10));
   
    int r,c,n; 
    cout<<"enter the rows=";cin>>r;
    cout<<"enter the columns=";cin>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            //cin>>n;
            cin>>V[i][j];
        V.push_back(V[i][j]);
        }
    }
    
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<V[i][j];
        }
        cout<<endl;    
    }
   
}
