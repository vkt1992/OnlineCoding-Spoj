#include<stdio.h>
#include<math.h>


long long int function(int n,int k)	{

	long long int fact=1;

	if(k > n-k)	k=n-k;

	for(int i=0;i<k;i++)
	{
		fact=fact*(n-i)/(i+1);
	}

	return fact;
	
}

int main()
{
	int t,n,k;
	long long int res;
	scanf("%d",&t);

	while(t--) {

		res=0;	
		scanf("%d%d",&n,&k);
		res=function(n-1,k-1);
		printf("%lld\n",res);
	}

	return 0;
}