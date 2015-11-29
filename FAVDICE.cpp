#include <iostream>
#include <stdio.h>
#include <math.h>

int main() 
{
	int t;

	scanf("%d",&t);

	while(t--) {

		int n,i;
		float res;
		scanf("%d",&n);
		

		if(n==1)	printf("1.00\n");
		else
		{
			res=0;
			for(i=1;i<=n;i++)
			{
				res=res+(1.0/i);
			}

			res=res*n;
			printf("%.2f\n",res);
		}
		
	}
	return 0;
}