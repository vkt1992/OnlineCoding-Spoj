#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	while(1)
	{
		long long int n,sum=0,i;

		scanf("%lld",&n);


		if(n==-1)	break;
		else
		{
			long long int candy[10001];
			for(i=0;i<n;i++)
			{
				scanf("%lld",&candy[i]);
				sum=sum+candy[i];
			}

			if(sum%n!=0)	printf("-1\n");
			else
			{
				sort(candy,candy+n);
				long long int cnt=0,req;
				req=sum/n;
				for(i=0;i<n;i++)
				{
					if(candy[i] < req)	cnt=cnt+(req-candy[i]);
				}
				printf("%lld\n",cnt);
			}
		}
	}

	return 0;
}