/*

problem link:
http://www.spoj.com/problems/ALICESIE

*/


#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,count=0;

		scanf("%d",&n);

		if(n%2==0)	count=n/2;
		else
		{
			int temp=floor(n/2);
			count=n-temp;
		}


		printf("%d\n",count);
	}
	return 0;
}