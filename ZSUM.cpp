#include <iostream>
#include <stdio.h>
using namespace std;
# define mod 10000007

long long int fast_exp(long long int base,long long int expp)
{
	long long res=1;
	while(expp > 0)
	{
		if(expp%2==1)	res=(res%mod*base%mod)%mod;

		base=(base%mod*base%mod)%mod;
		expp/=2;
	}

	return res%mod;
}

int main()
{
	while(1)
	{
		long long int n,k,serie;
		scanf("%lld%lld",&n,&k);
		if(n==0 && k==0)	break;
		serie=( (2%mod*fast_exp(n-1,k)%mod)%mod + (fast_exp(n,k))%mod + (2%mod*fast_exp(n-1,n-1)%mod)%mod + (fast_exp(n,n))%mod )%mod;
		printf("%lld\n",serie);
	}

	return 0;
}