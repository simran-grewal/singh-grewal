   // Kevin doesn't like his array .

    /*

    Kevin has an array A of N integers, but he doesn't like it - he only likes an array if all its neighboring elements are different (e.g. he likes the array [2,4,2,5,3,2,4], but not [1,2,3,3,4]).

Kevin can reverse any contiguous subarray of his array any number of times. For example, if he has the array [2,4,2,5,3,2,4] and reverses the subarray from 2nd to 5th element, he will obtain the array [2,3,5,2,4,2,4].

Now, Kevin wants to know the minimum number of reversals necessary to transform his array into an array he likes - if it's possible.

Input format:

The first line of the input will contain an integer N. The second line will contain N space-separated integers - the elements of A.

Output format:

If it's impossible to transform Kevin's array into an array he likes, print "-1" (without the quotes). Otherwise, print one number - the minimum number of reversals necessary.




     */



    #include <stdio.h>
    int max(int a,int b)
    { 

        int k;
        k=(a>b?a:b);
        return k;
    }

    int main()
    { 

    int n,i,count=0,a[100005]={0},b[100005]={0},c[100005]={0},C=0,B=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
        b[a[i]]++;
        //printf(" %d \n", b[a[i]]);
        B=max(B,b[a[i]]);
        //printf("%d\n", B);
        if(i&&(a[i]==a[i-1]))
        {
            ++count;
            c[a[i]]++;
            printf("%d", c[a[i]]);
            C=max(C,c[a[i]]);
    
        }   

    }
    if(B>(n+1)/2)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max((count+1)/2,C));};
        return 0;
    }
