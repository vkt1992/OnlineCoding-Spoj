#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--){

		int n,man_rates[1001],women_rates[1001],i;
		long long int rates=0;

		scanf("%d",&n);

		for(i=0;i<n;i++)	scanf("%d",&man_rates[i]);

		for(i=0;i<n;i++)	scanf("%d",&women_rates[i]);
	
		sort(man_rates,man_rates+n);
		sort(women_rates,women_rates+n);

		for(i=0;i<n;i++)
		{
			rates=rates+man_rates[i]*women_rates[i];
		}

		printf("%lld\n",rates);

	}

	return 0;
}