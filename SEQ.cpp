/*

problem link:
http://www.spoj.com/problems/SEQ/

*/

#include<iostream>
#include<stdio.h>
#define modulo 1000000000
using namespace std;

long long int count(long long int n,long long int b[11],long long int c[11],long long int k)
{
	long long int res=0;
	if(n <= k)
	{
		//cout<<"here:"<<b[n];
		return b[n];
	}
	else
	{
		
		int i;
		for(i=1;i<=n;i++)
		{
			res+=c[i]*count(n-i,b,c,k);
		}
	}
	return res;
}

int main()
{
	int t,i;
	scanf("%d",&t);

	while(t--)
	{
		long long int b[11],c[11],k,n;
		scanf("%lld",&k);
		
		for(i=1;i<=k;i++)
		{
			scanf("%lld",&b[i]);
		}

		for(i=1;i<=k;i++)
		{
			scanf("%lld",&c[i]);
		}

		scanf("%lld",&n);

		long long int myres;

		//cout<<"here1:"<<b[n];

		myres=count(n,b,c,k)%modulo;

		printf("%lld\n",myres);
	}
}