#include<iostream>
#include<stdio.h>
using namespace std;

int n[1000001]={0};

void cal(int k,int l)
{
	int a,b,c,i;
	for(i=1;i<=1000000;i++)
	{
		a=i-1;
		b=i-k;
		c=i-l;

		if(a==0 || b==0 || c==0)	
		{
			n[i]=1;
		}

		else if(a > 0 && b >0 && c > 0)
		{
			if(n[a]==0 || n[b]==0 || n[c]==0)
			{
				n[i]=1;
			}
		}
		else if(b > 0 && c < 0)
		{
			if(n[a]==0 || n[b]==0)
			{
				n[i]=1;
			}
		}
		else if(c >0 && b < 0)
		{
			if(n[a]==0 || n[c]==0)
			{
				n[i]=1;
			}
		}
		else if(b < 0 && c < 0)
		{
			if(n[a]==0)	n[i]=1;
		}

	}
}

int main()
{
	int k,l,m,i,pos;
	scanf("%d%d%d",&k,&l,&m);
	
	cal(k,l);

	while(m--)
	{
		scanf("%d",&pos);

		if(n[pos]==1)
		{
			printf("A");
		}
		else
		{
			printf("B");
		}
	}

	cout<<endl;

	return 0;

}