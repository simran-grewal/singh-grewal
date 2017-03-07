#include<bits/stdc++.h>
using namespace std;
 
// Returns floor of 5th root of n
int floorRoot5(int n)
{
    // Base cases
    if (n == 0 || n == 1)
        return n;
 
    // Initialize result
    int res = 0;
 
    // Keep incrementing res while res^5 is
    // smaller than or equal to n
    while (res*res*res*res*res <= n)
        res++;
 
    // Return floor of 5'th root
    return res-1;
}
 
// Driver program
int main()
{
    int n = 250;
    cout << "Floor of 5'th root is "
         << floorRoot5(n);
    return 0;
}
