#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a,b,c;

	while(1)
	{
		scanf("%d%d%d",&a,&b,&c);

		if(a==0 && b==0 && c==0)	break;
		else
		{
			int comm_diff1,comm_diff2,com_ratio1,com_ratio2;

			comm_diff1=b-a;
			comm_diff2=c-b;

			com_ratio1=(b/a);
			com_ratio2=(c/b);

			if(comm_diff1==comm_diff2)
			{
				int d;
				d=comm_diff1+c;
				printf("AP %d\n",d);
			}
			else
			{
				int d;
				d=c*com_ratio1;
				printf("GP %d\n",d);
			}
		}
	}

	return 0;
}