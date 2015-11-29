#include<stdio.h>
#include<math.h>

int def[10001];

int main()
{
	int n,sum=0,i;

	scanf("%d",&n);

	for(i=1;i<=sqrt(n);i++)
	{	
		if(i==1)	sum=sum+n;
		else
		{
			if(n%i==0 && def[i]==0)
			{
				sum=sum+1;
				def[i]=1;
			}
		}
	}

	printf("%d\n",sum);

	return 0;
}