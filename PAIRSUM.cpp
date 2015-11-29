/*

so we need to store mul[i] = (a[0] + .. + a[i]) * a[i];
ans(u, v) = mul[u] + ... + mul[v] — (a[u] + ... + a[v]) * (a[0] + ... + a[u — 1]);
so, you need to store cumSumA[i] = a[0] + ... + a[i]
cumSumM[i] = mul[0] + ... + mul[i]
ans(u, v) = cumSumM[v] — cumSumM[u — 1] — (cumSumA[u — 1]) * (cumSumA[v] — cumSumA[u — 1])


*/

#include <iostream>
#include <stdio.h>
using namespace std;

long long int rray[100000],n,m,mul[100000],cumSumM[100000],cumSumA[100000];

void cal()
{
	cumSumA[0]=rray[0];
	mul[0]=rray[0]*rray[0];
	cumSumM[0]=mul[0];

	long long int i;
	for(i=1;i<n;i++)
	{
		cumSumA[i]=cumSumA[i-1]+rray[i];
		mul[i]=rray[i]*(cumSumA[i]);
		cumSumM[i]=mul[i]+cumSumM[i-1];
	}
}

int main()
{
	long long int i;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&rray[i]);
	}
	
	cal();

	scanf("%lld",&m);

	while(m--)
	{
		long long int res,u,v;
		scanf("%lld%lld",&u,&v);

		if(u!=0)
		{
		res=(cumSumM[v]-cumSumM[u-1])-((cumSumA[u-1])*(cumSumA[v]-cumSumA[u-1]));
		printf("%lld\n",res);	
		}
		else
		{
			res=cumSumM[v];
			printf("%lld\n",res);
		}
		
	}

	return 0;

}