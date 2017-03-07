#include<stdio.h>
#include<math.h>
#define ll long long int
#define sq sqrt(n)
#define fl floor(sq)
#define cl ceil(sq)
int main()
{
	ll t, n, f, c; scanf("%lld", &t);
	while(t--)
	
	{
		 scanf("%lld", &n);
		f = fl * fl, c = cl * cl;
		(f == n) ? printf("YES\n") : ((n - f < c - n) ? printf("%lld\n", f - n) : printf("+%lld\n", c - n));
	}		
	return 0;
}
