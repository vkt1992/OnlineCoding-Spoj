#include <iostream>
#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		long long int x,y;

		scanf("%lld%lld",&x,&y);

		if(x==y)
		{
			if(x%2==0)	printf("%lld\n",2*x);
			else
				printf("%lld\n",(2*x)-1);
		}
		else if(x > y)
		{
			if(x%2==0 && y%2==0 && x-y==2)	printf("%lld\n",x+y);

			else if(x%2!=0 && y%2!=0 && x-y==2)	printf("%lld\n",x+y-1);

			else	printf("No Number\n");
		}

		else	printf("No Number\n");
	}

	return 0;
}