#include<bits/stdc++.h>
using namespace std;
 

 
int main(){
string st;
set<long> ans;	
cin>>st;

for (int i=0;i<st.size();i++)
{
	long long s=0;
	for (int j=i;j<st.size();j++)
	{
		s=s*101+st[j];
        cout<<s<<endl;
		ans.insert(s);
	}
}
//cout <<c<<endl;
cout<<ans.size()<<endl;
return 0;}
