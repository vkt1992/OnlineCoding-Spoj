/*
********************************************************
VIVEK KUMAR THAKUR
ARMY INSTITUTE OF TECHNOLOGY
Algo:Dp
verdict:AC
*********************************************************
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <string.h>
#include <map>
#include <stdlib.h>
using namespace std;

long long int n,dp[2001][2001],trt[2001];

long long int its_max(long long int a,long long int b)
{
	if(a >= b)	return a;
	else	
		return b;
}

long long int treat(int year,int front,int end)
{
	if(front > end)	return 0;

	if(dp[front][end]!=-1)
		return dp[front][end];

	return dp[front][end]=its_max((treat(year+1,front+1,end)+ year*trt[front]),(treat(year+1,front,end-1)+ year*trt[end]));

}

int  main()
{
	int i;
	
	scanf("%lld",&n);

	for(i=0;i<n;i++)
	{
		scanf("%lld",&trt[i]);
	}

	for(i=0;i<n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			dp[i][j]=-1;
		}
	}

	printf("%lld\n",treat(1,0,n-1));

	return 0;
}