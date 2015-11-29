#include <stdio.h>
#include <math.h>

int square(long long int n)
{
	int i,j=0;
	i=sqrt(n);
	while(1)
	{
		if(j*j > n)	return 0;

		long long int x,y;
		x=pow(i,2);
		y=pow(j,2);

		if(x+y==n)	return 1;

		if(x+y < n)	j++;
		else
			i--;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);

		if(n%2!=0)
		{
			if(n%4==1)	printf("Yes\n");
			else
				printf("No\n");
			//printf("hello\n");
		}
		else
		{
			int check=square(n);

			if(check==1)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}

		}
		
	}

	return 0;
}