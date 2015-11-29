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

long long int tree1[100001],maxval,tree2[100001];

long long int read(long long int tree[],long long int idx)
{
	long long int sum=0;

	while(idx > 0) {

		sum=sum + tree[idx];
		idx=idx - (idx & (-idx));
	}

	return sum;
}

void update(long long int tree[],long long int idx,long long int val)
{
	while(idx <=maxval) {

		tree[idx]=tree[idx] + val;
		idx=idx + (idx & (-idx));
	}
}

int  main()
{
	long long int t;
	input(t);

	while(t--)
	{
		long long int n,c,i;

		input(n);
		input(c);

		maxval=n;

		for(i=0;i<=n;i++)	
		{
			tree1[i]=0;
			tree2[i]=0;
		}

		while(c--)
		{
			long long int chck,p,q;
			long long int v;

			input(chck);
			input(p);
			input(q);

			if(chck==0)
			{
				input(v);
				update(tree1,p,v);
				if(q < n)	update(tree1,q+1,(-1)*v);

				update(tree2,p,v*(p-1));

				if(q < n)	update(tree2,q+1,(-1)*v*q);

			}
			else
			{
				long long int sum1,sum2,sum;
				sum1=read(tree1,q)*q - read(tree2,q);
				p=p-1;
				sum2=read(tree1,p)*p - read(tree2,p);
				sum=sum1-sum2;
				printf("%lld\n",sum);
				
			}
		}
	}

	return 0;
}