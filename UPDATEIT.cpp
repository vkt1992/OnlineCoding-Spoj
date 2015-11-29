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

long long int tree[10001],maxval;

long long int read(long long int idx)
{
	long long int sum=0;

	while(idx > 0) {

		sum+=tree[idx];
		idx-=(idx & -idx);
	}

	return sum;
}

void update(long long int idx,long long int val)
{
	while(idx <=maxval) {

		tree[idx]+=val;
		idx+=(idx & -idx);
	}
}


int  main()
{
	int t;
  scanf("%d",&t);

  while(t--)
  {
    long long int i,n,q,u,indx1,indx2;
    long long int val;

    for(i=0;i<=10000;i++) tree[i]=0;

    scanf("%lld%lld",&n,&u);
    maxval=n;

    for(i=0;i<u;i++)
    {
      scanf("%lld%lld%lld",&indx1,&indx2,&val);
      update(indx1+1,val);
      if(indx2 < n) update(indx2+2,(-1)*val);
    }

    scanf("%lld",&q);

    while(q--)
    {
      long long int index;
      long long int element;
      scanf("%lld",&index);
      element=read(index+1);
      printf("%lld\n",element);
    } 

  }

	return 0;
}