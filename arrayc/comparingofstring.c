    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    set<string> name;
    set<string> ans;
    set<string> :: iterator it;
    int n;
    cin>>n;
    while(n--)
    {
    string a;
    cin>>a;
    it = name.find(a);
    if(it == name.end())
    {
    name.insert(a);
    }
    else
    {
    ans.insert(a);
    }
    }
    cout<<ans.size()<<endl;
    for(it = ans.begin(); it != ans.end(); it++)
    cout<<*it<<endl;
    }
