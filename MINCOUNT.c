#include<stdio.h>
int main()
{
	long long int h,cnt,n;
	scanf("%lld",&n);

	while(n--)
	{
		scanf("%lld",&h);
		cnt=(h*(h+1))/6;
		printf("%lld\n",cnt);
	}

	return 0;
}