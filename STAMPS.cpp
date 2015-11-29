#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int t,j=1;
	scanf("%d",&t);

	while(t--)
	{
		int n,arr[1001],i,need;
		long long int sum=0,count=0;
		scanf("%d%d",&need,&n);

		for(i=0;i<n;i++)	scanf("%d",&arr[i]);

		sort(arr,arr+n);

		for(i=n-1;i>=0;i--)
		{
			sum=sum+arr[i];
			count++;
			if(sum >= need)	break;
		}

		if(sum >= need)
		{
			printf("Scenario #%d:\n",j);
			printf("%lld\n",count);
		}
		else
		{
			printf("Scenario #%d:\n",j);
			printf("impossible\n");
		}	
		printf("\n");
		j++;

	}

	return 0;
}