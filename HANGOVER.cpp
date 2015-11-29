#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	while(1)
	{
		float x,y;

		scanf("%f",&x);

		if(x==0.00) break;
		else
		{
			int i,temp=0;
			float sum=0;

			for(i=2;sum<=x;i++)
			{
				sum=sum+(1.0)/i;
				temp=i;
			}	

			printf("%d card(s)\n",temp-1);

		}
	}

	return 0;
}