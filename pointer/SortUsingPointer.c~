#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main ()
{
    char *str[5];
    int i, j, k;

    for(i = 0; i < 5; i++)
    {
        str[i] = malloc(20 * sizeof(char));        
    }

    char **ptr = str;

    for(i = 0; i < 5; i++)
    {
        scanf("%s", *ptr);
        *ptr++;
    }
  
    ptr = str;
 
    for(i = 0; i < 5; i++)
    {
        char *ptr1;
        char *ptr2;
        for(ptr1 = ptr[i]; *ptr1 ; ptr1++)
        {
            for(ptr2 = ptr1 + 1; *ptr2; ptr2++)
            {
                if(*ptr1 > *ptr2)
                {
                    char temp;
                    temp = *ptr1;
                    *ptr1 = *ptr2;
                    *ptr2 = temp;
                }
            }
        }
    }

    while(*ptr)
    {
        printf("\n%s", *ptr);
        ptr++;
    }

    

}   
