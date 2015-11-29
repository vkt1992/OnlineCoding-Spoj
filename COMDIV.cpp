#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

long long int solve(int a,int b)
{
	int mygcd=gcd(a,b);
	int gcdsqrt=sqrt(mygcd);
	long long int res=0;
	for(int i=1;i<=gcdsqrt;i++)
	{
		if(mygcd%i==0)
		{
			res=res+2;
			if(i*i==mygcd)	res=res-1;
		}
	}
	return res;
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		long long int res=solve(a,b);
		printf("%lld\n",res);
	}	

	return 0;
}