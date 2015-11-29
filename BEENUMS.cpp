#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;

map<int,int>mp;

void calculate()
{
	int i;
	long long int num=1;

	for(i=1;num<=1000000000;i++)
	{
		if(i==1)
		{
			mp[1]=1;
			num=1;
		}
		else
		{
			num=num+(i-1)*6;
			mp[num]=1;
		}
	}
}

int fun(int n)
{
	if(mp[n]) return 1;

	else return 0;
}

int main()
{
	calculate();
	while(1)
	{
		int n,res;
		scanf("%d",&n);

		if(n==-1) break;

		else
		{
			res=fun(n);

			if(res==0)
			{
				printf("N\n");
			}
			else
			{
				printf("Y\n");
			}
		}

		
	}
	return 0;
}