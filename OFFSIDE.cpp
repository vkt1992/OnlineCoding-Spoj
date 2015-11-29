#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int a,d;

	while(1)
	{
		int i,aa[12],dd[12];

		scanf("%d%d",&a,&d);

		if(a==0 && d==0)	break;

		else
		{
			for(i=0;i<a;i++)
			{
				scanf("%d",&aa[i]);
			}

			for(i=0;i<d;i++)
			{
				scanf("%d",&dd[i]);
			}

			sort(dd,dd+d);

			int scnd,flag=0;
			scnd=dd[1];

			for(i=0;i<a;i++)
			{
				if(aa[i] < scnd)
				{
					flag=1;
					break;
				}
			}

			if(flag==1)	printf("Y\n");
			else printf("N\n");

		}
	}
	return 0;
}