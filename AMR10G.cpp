#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int arr[20010],n,k,pos,i;
		scanf("%lld%lld",&n,&k);

		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}

		if(k==1)	printf("0\n");
		else
		{
			pos=n-1;
			long long int res=999999999;
			sort(arr,arr+n);
			k=k-1;

			for(i=0;i<=pos-k;i++)
			{
				long long int temp;
				temp=arr[i+k]-arr[i];
				if(temp < res)	res=temp;
			}
			
			printf("%lld\n",res);
		}
	}

	return 0;

}

/*
Verdict: AC

4
7 4
1 2 3 4 5 6 7
3
7 4
1 1 1 1 5 6 7
6


*/