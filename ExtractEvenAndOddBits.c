#include <stdio.h>
void print(unsigned x)
{
    unsigned i;
    for(i = 1 << 31; i > 0; i /= 2)
    {
        if(i & x)
        printf("1");
        else
        printf("0");
    }
}

int main()
{
   int  x = 3, a, b;
     print(x);
    a = x & 0XAAAAAAAA;
    printf("\n\n");
    print(a);
    printf("\n\n"); 
    b = x & 0X55555555;    
     print(b);
}
