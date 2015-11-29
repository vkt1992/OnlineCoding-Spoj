#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std; 

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,temp;

		scanf("%d",&n);
		temp=n;

		int demo=1,nemo=1,count=1,flag=0,done=0;
		while(1)
		{	
			if(n==1)
			{
				printf("TERM 1 IS 1/1\n");
				break;
			}
			else
			{
				if(nemo==1 && flag==0)
				{
					demo=demo+1;
					flag=1;
					count++;
				}

				if(n==count)	break;

				if(nemo=1 && flag==1)
				{
					while(demo!=1)
					{
						nemo=nemo+1;
						demo=demo-1;
						count++;

						if(n==count)
						{
							done=1;
							break;
						}
					}
					flag=0;
				}

				if(done==1)	break;


				if(demo==1 && flag==0)
				{
					nemo=nemo+1;
					flag=1;
					count++;
				}

				if(n==count)	break;

				if(demo==1 && flag==1)
				{
					while(nemo!=1)
					{
						nemo=nemo-1;
						demo=demo+1;
						count++;

						if(count==n)	
						{
							done=1;
							break;
						}

					}
					flag=0;
				}

				if(done==1)	break;

			}
		}

		printf("TERM %d IS %d/%d\n",n,nemo,demo);
	}

	return 0;
}