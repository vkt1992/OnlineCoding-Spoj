#include<stdio.h>

void calculate_prime()
{
	int i,j;
	prime[1]=1;
	for(i=2;i<=sqrt(100000);i++)
	{
		for(j=i+1;j<=100000;j++)
		{
			if(prime[j]!=1)
			{
				if(j%i==0)	prime[j]=1;
			}
		}
	}

}

int main()
{
	int t,n,m;

	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&m,&n);
		

	}
}