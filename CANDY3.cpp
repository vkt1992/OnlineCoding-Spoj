/*
hint overflow problem
sum=(sum+temp)%n; //imp
Verdict: AC
*/


#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--) {

		printf("\n");
		long long int n,sum=0,temp,i;
		scanf("%lld",&n);

		for(i=0;i<n;i++)
		{
			scanf("%lld",&temp);
			sum=(sum+temp)%n;
		}

		if(sum==0)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}