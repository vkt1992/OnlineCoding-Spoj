#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int count[1001],pos=0;

void calculate_prime()
{
	int num=1;
	int temp;

	while(1)
	{
		temp=num;
		int cnt=0;
		for(int i=2;i<=sqrt(temp);i++)
		{
			if(temp%i==0)
			{
				while(temp%i==0)
				{
					temp=temp/i;
				}
				cnt++;
			}
		}

		if(temp > 1)	cnt++;

		if(cnt >= 3)
		{
			count[pos++]=num;
		}

		num++;

		if(pos==1000) break;
	}

}

int main()
{
	 calculate_prime();

	 int t;
	 scanf("%d",&t);
	 while(t--)
	 {
	 	int n;
	 	scanf("%d",&n);
	 	printf("%d\n",count[n-1]);
	 }

	 return 0;
	 
}
