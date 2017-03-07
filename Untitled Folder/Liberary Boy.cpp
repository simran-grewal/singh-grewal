/////////////// i dont understant what is going on. 
   #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    int n; cin >> n;
    int tmp = 0;
    int arr[26+10] = {0};
    while (tmp<n) {
    string str; cin >> str;
    arr[str[0]-97]++;
    tmp++;
    }
    int res = 0;
    for (int i=0; i<26; ++i) {
    if (arr[i] > 0) {
     cout << "i: " << i << " arr[i]: " << arr[i] << endl;
    if (arr[i]%10 == 0) {
    res += arr[i]/10;
    cout<<res<<endl;
    } else {
    res += (arr[i]/10) + 1;
    cout<<res<<endl;
    }
    }
    }
    cout << res << endl;
    return 0;
    }

