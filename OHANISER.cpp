#include<iostream>
#include<stdio.h>
#define mod 1000000007
using namespace std;

long long int myres[100001];

void myfunction()
{
	myres[1]=1;
	long long int i,frt,snd;
	frt=2;
	snd=1;
	for(i=2;i<=65;i++)
	{
		myres[i]=((frt*i)-snd);
		cout<<i<<" : "<<myres[i]<<endl;
		myres[i]=myres[i]%1000000007;
		cout<<i<<" : "<<myres[i]<<endl;
		snd=frt+snd+snd;
		frt=frt*2;
	}

}

int main()
{
	int t,i;
	scanf("%d",&t);

	myfunction();
	
	for(i=1;i<=t;i++)
	{
		int n;
		scanf("%d",&n);
		long long int res;
		res=myres[n];
		printf("Case %d: %lld",i,res);
		printf("\n");
	}
	return 0;
}
