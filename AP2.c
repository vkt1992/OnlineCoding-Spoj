#include<stdio.h>
int main()
{
	long long int t,n,a,d,ftrd,ltrd,sum,i,trm;
	scanf("%lld",&t);
 
	while(t--)
	{
		scanf("%lld%lld%lld",&ftrd,&ltrd,&sum);
		n=(2*sum)/(ftrd+ltrd);
		d=(ftrd-ltrd)/(5-n);
		a=ftrd-(2*d);
 
		printf("%lld\n",n);
 
		for(i=0;i<n;i++)
		{
			trm=a+(i*d);
			printf("%lld ",trm);
		}
		printf("\n");
	}
	return 0;
} 