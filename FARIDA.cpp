#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

long long int max(long long int a,long long int b) {

	if(a > b)	return a;
	else return b;
}

int main()
{
	int t,j=1;
	cin>>t;

	while(t--)
	{
		 
		long long int total_coins[10030],coins[10030],i,n;
		
		cin>>n;

		for(i=0;i<n;i++)
		{
			cin>>coins[i];

			if(i==0 || i==1)	total_coins[i]=coins[i];
			else
			{
				total_coins[i]=max(coins[i]+total_coins[i-2],coins[i]+total_coins[i-1]-coins[i-1]);
			}

		}

		sort(total_coins,total_coins+n);

		cout<<"Case "<<j<<": "<<total_coins[n-1]<<endl;
		j++;
	}
	return 0;
}