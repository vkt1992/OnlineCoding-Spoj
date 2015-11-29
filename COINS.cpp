#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
map<long long int,long long int>mp;

long long int fun(long long int n)
{
	long long int a;

	if(n==0){
		return 0;
	}

	a=mp[n];

	if(a==0){

		a=max(n,fun(n/2)+fun(n/3)+fun(n/4));
		mp[n]=a;
	}

	return a;
}

int main()
{
	long long int n,a;

	while(scanf("%lld",&n) > 0)
	{
		mp.clear();
		a=fun(n);
		printf("%lld\n",a);
	}

	return 0;
}