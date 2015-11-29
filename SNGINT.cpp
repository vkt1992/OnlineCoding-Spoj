#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int a[101]={0},pos=0;
int cal(int n)
{
	int i,t,v=1;
	t=n;

	for(i=0;i<=101;i++) a[i]=0;
	pos=0;

	for(i=9;i>=2;i--)
	{
		if(t%i==0)
		{
				while(t%i==0)
				{
					a[pos]=i;
					pos++;
					t=t/i;
					
				}
			}
	}

	if(t > 10)	return 0;
	else return 1;
	

}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		if(n==0)	printf("10");
		else if(n <= 9) printf("%d",n);
		else 
		{
			int res=cal(n);
			if(res==1)
			{
				for(i=pos-1;i>=0;i--)	
				{
					printf("%d",a[i]);
				}
			}
			else printf("-1");
			
		}
		
		printf("\n");
	}
	return 0;
}