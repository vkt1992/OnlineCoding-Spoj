#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

int cal_Z_function(char s[],int n)
{
	int i,z[n+9],count=0,l=0,r=0;
	memset(z,0,sizeof z);
	z[0]=n;

	for(i=1;i<n;i++)
	{
		if(i<=r) z[i]=min(r-i+1,z[i-l]);
		
		while(i+z[i]<n && s[z[i]]==s[i+z[i]])
			z[i]++;

		if(i+z[i]-1 > r)
		{
			l=i;
			r=i+z[i]-1;
		}

		if(z[i]==n-i) count++;
			
	}

	return count;
}

int main()
{
	int t,j=1;
	scanf("%d",&t);
	while(t--)
	{
		char s[1000001];
		int len,res;
		scanf("%s",s);
		len=strlen(s);
		res=cal_Z_function(s,len);
		printf("Case %d: %d\n",j,res);
		j++;
	}

	return 0;
}