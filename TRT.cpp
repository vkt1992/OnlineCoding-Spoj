/*
Verdict: WA
Don't apply greedy approach 
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main() {

	int n,arr[2001],pos,i,j;
	long long int res=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)	scanf("%d",&arr[i]);

	pos=1;
	i=0;
	j=n-1;
	while(i!=j)
	{
		if(arr[i] < arr[j])
		{
			res=res+arr[i]*pos;
			i++;
			pos++;
		}
		else
		{
			res=res+arr[j]*pos;
			j--;
			pos++;
		}
	}

	res=res+arr[j]*pos;

	printf("%lld\n",res);

	return 0;

}