#include <iostream>
#include <algorithm>
#define m 1000000007
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int a,b,c;
		cin>>a>>b>>c;
		long long int p=__gcd(a,__gcd(b,c)),y=((a/p)%m* (b/p)%m* (c/p)%m)%m;
		cout<<p<<" "<<y<<"\n";
	}
}

