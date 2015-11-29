/*
********************************************************
VIVEK KUMAR THAKUR
ARMY INSTITUTE OF TECHNOLOGY
*********************************************************
*/

#include <iostream>
#include <stdio.h>
#include <map>
#include <stdlib.h>
using namespace std;

map<long long int,long long int>result;
map<long long int,long long int>past;

void precompute()
{
	result[0]=0;
	past[0]=1;

	for(int i=1;i<=500000;i++)
	{
		long long int temp;
		temp=result[i-1]-i;

		if((temp < 0) || (past[temp]==1))
		{
			temp=result[i-1]+i;
			result[i]=temp;
			past[temp]=1;	
		}
		else
		{	result[i]=temp;
			past[temp]=1;	
		}
	}
}

int  main()
{
	precompute();
	
	while(1)
	{	
		int n;
		scanf("%d",&n);

		if(n==-1)	break;
		else
		{
			long long int res;
			res=result[n];
			printf("%lld\n",res);
		}
	}	
	
	return 0;
}