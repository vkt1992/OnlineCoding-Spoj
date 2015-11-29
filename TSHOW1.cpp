#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%lld",&i);

long long int next[60],range[60];

int mysearch(long long int indx_value)
{
	int i;

	for(i=0;i<=50;i++)
	{
		if(range[i] >= indx_value)
		{
			return i;
		}
	}
}

void precompute()
{
	range[0]=0;
	for(int i=1;i<=50;i++)
	{
		next[i]=pow(2,i);
		range[i]=range[i-1]+next[i];
	}
}

int main()
{
	long long int n;

	input(n);
	precompute();

	while(n--)
	{
		long long int cse,index,pos;
		input(cse);

		index=mysearch(cse);
		pos=cse-range[index-1];
		pos=pos-1;
		char result[100001];
		long long int cnt=0;

		while(index--)
		{	
			long long int temp;
			temp=pos & 1;

			if(temp==1)
			{
				result[cnt++]='6';
			}
			else
			{
				result[cnt++]='5';
			}
			pos=pos>>1;
		}

		for(int i=cnt-1;i>=0;i--)
		{
			printf("%c",result[i]);
		}

		cout<<endl;

	}

	return 0;
}