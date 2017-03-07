void reverse(unsigned x)
{
    unsigned i;

    for(i = 1 << 0; i < 1 << 31; i *= 2 )
    {
        if(i & x)
        printf("1");
        else
        printf("0");
        
    }
}
int main()
{
   int  x =11;
    print(x);
    printf("\n");
    reverse(x);
}
