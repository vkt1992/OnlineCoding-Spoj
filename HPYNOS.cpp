#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

long long int pow(long long int base,long long int exp) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) 
       {
       		res=(res*base);
       }
       base=(base*base);
       exp/=2;
    }
    return res;
}

int main()
{
	long long int sum,n,cnt=0,flag=0;
	map<int,int>mp;

	scanf("%lld",&n);
	sum=n;

	while(1)
	{
		if(n==1)	break;
		else
		{
			if(mp[n])	
			{
				flag=1;
				break;
			}
			else
			{
				int temp;
				mp[n]=1;
				temp=n;
				sum=0;
				while(temp > 0)
				{
					int res=temp%10;
					temp=temp/10;
					sum=sum+pow(res,2);
				}
				n=sum;
				

			}
		}
		cnt++;
	}

	if(flag==1)	printf("-1\n");
	else printf("%lld\n",cnt);
	
	return 0;
}