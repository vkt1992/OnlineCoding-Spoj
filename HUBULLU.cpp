#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		long long int n,st;

		scanf("%lld%lld",&n,&st);

		if(st==0)	printf("Airborne wins.\n");
		else	printf("Pagfloyd wins.\n");
	}
	return 0;
}