#include<iostream>
#include<stdio.h>
#define MOD 1000000007
using namespace std;

long long int pow_mod(int n)
{
	long long int a=1,p=2;

	while(n)
	{
		if(n&1)
		{
			a=(a*p)%MOD;
		}
		p=(p*p)%MOD;
		n>>=1;
	}
	return a;
}
int main()
{
	int t,j=1;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);

		if(n==1)	printf("Case %d: 1\n",j);

		else if(n==2)	printf("Case %d: 3\n",j);

		else
		{
			long long int myres;
			myres=((n+1)*(pow_mod(n-2)))%MOD;
			printf("Case %d: %lld\n",j,myres);
		}
		j++;
	}
	return 0;
}