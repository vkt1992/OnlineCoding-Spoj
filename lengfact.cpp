#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		float pi= 3.1415926535897932384626433,ee=2.7182818284590452353602874; 
		scanf("%lld",&n);

		if(n==1)	printf("1\n");

		else if(n==0)	printf("1\n");

		else
		{
		long long int prt1,prt2,prt3,count;
		prt1=log(2*pi*n))/2;
		prt2=n*(log(n)-log(ee));
		prt3=(prt1+prt2)/log(10);
		count=prt3+1;
		cout<<(count);
		cout<<"\n";
		}
		
	}

	return 0;

}