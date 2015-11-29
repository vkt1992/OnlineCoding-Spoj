#include<stdio.h>
#include<string.h>
#include<math.h>

int prime[100001]={0};

void calculate_prime(long long int n,long long int m)
{
	long long int i,j,min;
	
	for(i=2;i<= sqrt(n);i++)
	{
			min=m/i;
			min =min*i;
			if(min<m)
			{
				min=min+i;
			}

		for(j=min;j<=n;j=j+i)
		{
			if(j%i==0 && j!=i)
			{
					prime[j-m]=1;
			}
		}
	}

}

int main()
{
	long long int t,n,m,i;

	scanf("%lld",&t);
	while(t--)
	{ 
		scanf("%lld%lld",&m,&n);

		calculate_prime(n,m);

		for(i=0;i<=n-m;i++)
		{
			if(prime[i]==0)	
			{
				if((i+m)!=1)	
				{
					printf("%lld\n",i+m);
				}
			}
			prime[i]=0;
		}
		
		printf("\n");
	}
	return 0;
}