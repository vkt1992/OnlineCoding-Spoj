#include <iostream>
#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);

		if(n%2==0)	printf("Thankyou Shaktiman\n");
		else
			printf("Sorry Shaktiman\n");
	}
	return 0;
}