/*

hint for this problem : 0-1 Knapsack Problem
7 2 
6 1 
5 1 

0 0 

your output should be: 5 1

*/

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#define inp(i) scanf("%d",&i)
using namespace std;

int max(int a,int b)
{
	if(a > b)	return a;
	else	return b;
}

int min(int a,int b)
{
	if(a < b)	return a;
	else	return b;	
}

int main()
{
	int fun,n;

	while(1)
	{
		int fees[101],tyfun[101],dp[101][501],i,j,w[101][501];
		inp(fun);
		inp(n);
	
		if(n==0 && fun==0)	break;

		for(i=0;i<n;i++)	
		{
			inp(fees[i]);
			inp(tyfun[i]);
		}

		for(i=0;i<=n;i++) {

			for(j=0;j<=fun;j++)
			{
				if(i==0 || j==0)	
				{
					dp[i][j]=0;
					w[i][j]=0;
				}
				else if(fees[i-1] > j) 
				{
					dp[i][j]=dp[i-1][j];
					w[i][j]=w[i-1][j];
				}
				else
				{
					dp[i][j]=max(dp[i-1][j],tyfun[i-1]+dp[i-1][j-fees[i-1]]);

					if(dp[i-1][j] > tyfun[i-1]+dp[i-1][j-fees[i-1]])
					{
						w[i][j]=w[i-1][j];
					}
					else if(dp[i-1][j] < tyfun[i-1]+dp[i-1][j-fees[i-1]])
					{
						w[i][j]=fees[i-1]+w[i-1][j-fees[i-1]];
					}
					else if(dp[i-1][j] == tyfun[i-1]+dp[i-1][j-fees[i-1]])
					{
						w[i][j]=min(w[i-1][j],fees[i-1]+w[i-1][j-fees[i-1]]);
					}
				}
			}
		}
	
		printf("%d %d\n\n",w[n][fun],dp[n][fun]);
	}
	
	return 0;
}