#include<bits/stdc++.h>
using namespace std;
 
void stringFilter(char *str)
{
    int n = strlen(str);
 
    int i = -1;  // previous character
    int j = 0;   // current character
 
    while (j < n)
    {
        /* check if current and next character forms ac */
        if (j < n-1 && str[j] == 'a' && str[j+1] == 'c')
            j += 2;
 
        /* if current character is b */
        else if (str[j] == 'b')
            j++;
 
        /* if current char is 'c && last char in output
           is 'a' so delete both */
        else if (i >= 0 && str[i] == 'a' && str[j] == 'c')
            i--,j++;
 
        /* else copy curr char to output string */
        else
            str[++i] = str[j++];
    }
    str[++i] = '\0';
}
 
// Driver program to test above function
int main()
{
    char str1[] = "ad";
    cout << "Input => " << str1 << "\nOutput => ";
    stringFilter(str1);
    cout << str1 << endl << endl;
 
    char str2[] = "acbac";
    cout << "Input => " << str2 << "\nOutput => ";
    stringFilter(str2);
    cout << str2 << endl << endl;
 
    char str3[] = "aaac";
    cout << "Input => " << str3 << "\nOutput => ";
    stringFilter(str3);
    cout << str3 << endl << endl;
 
    char str4[] = "react";
    cout << "Input => " << str4 << "\nOutput => ";
    stringFilter(str4);
    cout << str4 << endl << endl;
 
    char str5[] = "aa";
    cout << "Input => " << str5 << "\nOutput => ";
    stringFilter(str5);
    cout << str5 << endl << endl;
 
    char str6[] = "ababaac";
    cout << "Input => " << str6 << "\nOutput => ";
    stringFilter(str6);
    cout << str6 << endl << endl;
 
    char str[] = "abc";
    cout << "Input => " << str << "\nOutput => ";
    stringFilter(str);
    cout << str << endl << endl;
    return 0;
}
