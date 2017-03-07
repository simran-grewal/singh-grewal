#include <stdio.h>
#include <math.h>
void swap(unsigned x)
{
    unsigned i;
    int sum = 0;
    int j = 3, m = 7;
    for(i = 1 << 3; i > 0; i /= 2)
    {
        if(i & x)
        {

            printf("1");        
            sum += pow( 2, j);
        }
        else
        printf("0");

        j--;
    }
   // j = 7;
    for(i = 1 << 7; i > 8; i /= 2)
    {
        if(i & x)
        {
            printf("1");
            sum += pow(2, m);
        }
        else
        printf("0");

        m--;
    }


    printf("\n%d", sum);
}


int main()
{
    int x = 128;
    swap(x);
}
