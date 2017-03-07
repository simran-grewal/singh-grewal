#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main ()
{
    int i, j, R = 5, C = 10 ;
    char a[][10] = {"string1", "string2", "string3", "string4", "string5"};
    char *b[R];

    for(i = 0; i < R; i++)
    {
        b[i] = malloc(C * sizeof(char));    
    }

    
    strcpy(b[0], "string1");
    strcpy(b[1], "string2");
    strcpy(b[2], "string3");
    strcpy(b[3], "string4");
    strcpy(b[4], "string5");



    char (*ptr1)[C] = a;
    char *pp = *ptr1;
    printf("Contents of first array \n");
    for (i=0; i<R; i++)
    {
        printf("%s \n",*ptr1++);

    }

        printf("-----\n");
        printf("%s\n", pp++);
        printf("%s\n", pp++);
        printf("%s\n", pp++);
        printf("%s\n", pp++);
        printf("%s\n", pp++);
        printf("%s\n", pp++);
        printf("%s\n", pp++);
         
        printf("------\n");

    char **ptr2 = b;
    printf("Contents of second array \n");
    for (i=0; i<R; i++)
    {    
        printf("%s \n", ptr2[i]);

    }
}   
