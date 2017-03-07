#include <stdio.h>

int * fun()
{
    int * a;
    int value = 5;
    a = &value;

    return a;     
}
int main()
{
   int *p = fun();

    printf("%u", *p);
}
