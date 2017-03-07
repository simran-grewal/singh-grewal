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
void copybit(int x, int y, int l, int r)
{
    int i;
    for(i = 1 << (l - 1); i <= 1 << (r - 1); i <<= 1)
    {
        if(i & y)
        {
            x |= i;
        }
    }

    printf("%d\n", x);

    print(x);
}
int main()
{
    int x = 8;
    int y = 3;

    int l = 1;
    int r = 2;

    copybit(x, y, l, r);
}
