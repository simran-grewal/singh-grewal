#include<bits/stdc++.h>
using namespace std;
unsigned countWords(char *str)
{
    unsigned wrd=0;
    bool state=false;
    while(*str)
    {
        if(*str==' '||*str=='\n'||*str=='\t')
        {
            state=false;
        }
        else if(state==false)
        {
            state=true;
            ++wrd;
        }
        str++;
    }

    return wrd;
}
int main()
{
    char str[] = "   One two          three\n \t four\nfive \n ";
    printf("No of words: %u\n", countWords(str));
    return 0;
}
