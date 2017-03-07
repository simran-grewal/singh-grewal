#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main ()
{
    char *str[5];
    int i, j;

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
  
    printf("\n\n");

    
    ptr = str;

    while(*ptr)
    {
        printf("%s\n", *ptr);
        ptr++;
    }

}   
