#include <stdio.h>
long long int mod=109546051211;

int fact_product(int n)
{
	int result=1,main_result=1; 
	for(int i=1;i<=n;i++)
	{
		result=(result%mod*i%mod)%mod;
		main_result=(main_result%mod*result%mod)%mod;
	}

	return main_result%mod;
}

int main()
{
	int n,i,product;
	scanf("%d",&n);
	product=fact_product(n);
	printf("%d\n",product);
	return 0;
}