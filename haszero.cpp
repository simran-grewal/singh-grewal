// C++ program to count numbers from 1 to n with
// 0 as a digit
#include<bits/stdc++.h>
using namespace std;
 
// Returns 1 if x has 0, else 0
int has0(int x)
{
    // Traverse througn all digits of
    // x to check if it has 0.
    while (x)
    {
        // If current digit is 0, return true
        if (x % 10 == 0)
          return 1;
 
        x /= 10;
    }
 
    return 0;
}
 
// Returns count of numbers from 1 to n with 0 as digit
int getCount(int n)
{
    // Initialize count of numbers having 0 as digit
    int count = 0;
 
    // Travers through all numbers and for every number
    // check if it has 0.
    for (int i=1; i<=n; i++)
        count += has0(i);
 
    return count;
}
 
// Driver program
int main()
{
    int n = 107;
    cout << "Count of numbers from 1" << " to "
         << n << " is " << getCount(n);
}
