  
//Tic-Tac-Toe & Emails
  #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    int t;
    cin >> t;
    string s,temp;
    //stringstream ss;
    // cin >> ws;
    while(t--)
    {
    cin >> ws;
    getline(cin,s);
    stringstream ss(s);
    // vector<string>v;
    map<string,int> m;
    while(ss >> temp)
    {
    if(m[temp] >= 1)
    {
    continue;
    }
    else
    {
    m[temp]++;
    cout<<temp<<" ";
    }
     
    }
    cout<<endl;
    }
    return 0;
    }
