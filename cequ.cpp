#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)	return a;

	return gcd(b,a%b);
}

int main()
{
	int t,j=1;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c,chck;
		scanf("%d%d%d",&a,&b,&c);

		chck=gcd(a,b);
		
		//cout<<"gcd:"<<chck;

		if(c%chck==0)	printf("Case %d: Yes\n",j);

		else printf("Case %d: No\n",j);	

		j++;
	}
	
	return 0;	
}