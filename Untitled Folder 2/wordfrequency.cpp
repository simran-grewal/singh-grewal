   
// i thing its working is something like an hashing so i .............***********8
// i can removev the duplicacy of string by using the map function.
 #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    cin >> ws;
    string s;
    getline(cin,s);
    string temp;
    stringstream ss(s);
    vector<string> v;
    map<string,int> m;
    while(ss >> temp)
    {
    transform(temp.begin(),temp.end(),temp.begin(),::toupper);
    if(m[temp] == 0)
    {
    v.push_back(temp);
    m[temp]++;
    }
    else
    m[temp]++;
    }
    int i;
    for(i = 0 ; i < v.size(); i++)
    {
    cout << v[i] << " "<<m[v[i]]<<endl;
    }
    return 0;
    }
