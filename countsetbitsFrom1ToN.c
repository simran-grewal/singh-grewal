#include <stdio.h>
int count(unsigned n)
{
    int c1 = 0;
    unsigned i;
    for(i = 1 << 31; i > 0; i /= 2)
    {
        if(i & n)
        c1++;
    }

    return c1;
}
int main()
{
    int n = 5;
    
    unsigned i;
    int c = 0;
    for(i = 1; i <= 5; i++)
    {
        c += count(i);
    }

    printf("%d", c);
}    
