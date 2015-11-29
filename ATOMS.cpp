#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,m,k,time_req,in_one_sec;
		scanf("%lld%lld%lld",&n,&k,&m);
	
		if(n > m)	printf("0\n");	
		else
		{
			in_one_sec=n*k;
			time_req=m/in_one_sec;
			printf("%lld\n",time_req);
		}
	}
	return 0;
}