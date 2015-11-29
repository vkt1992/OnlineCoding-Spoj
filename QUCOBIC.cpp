#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	int t;

	scanf("%d",&t);
	while(t--)	{

		char str[5];
		int s,hr,min,tot_min,flag=0,tot_hr;
		scanf("%s",str);
		scanf("%d",&s);

		hr=(str[0]-48)*10 + (str[1]-48);
		min=(str[2]-48)*10 + (str[3]-48);

		
		tot_hr=s/(60*60);

		s=s-(tot_hr*3600);

		tot_min=s/60;

		if(s%60==0)	flag=1;

		if(hr!=tot_hr+hr)
		{
			min=tot_min;
			hr=hr+tot_hr;

			if(flag==1)
			{

				if(hr == 24)	
				{
					printf("00%d\n",min);
				}
				else if(hr > 24)
				{	
					printf("%d%d\n",24-hr,min);
				}
				else
				{
					printf("%d%d\n",hr,min);
				}

			}
			else
			{
				if(min+1 <= 60)
				{
					if(hr == 24)	
					{
						printf("00%d\n",min+1);
					}
					else if(hr > 24)
					{	
						printf("%d%d\n",24-hr,min+1);
					}
					else
					{
						printf("%d%d\n",hr,min+1);
					}
				}
				else
				{

					if(hr == 24)	
					{
						printf("0100\n");
					}
					else if(hr > 24)
					{	
						printf("%d00\n",24-hr+1);
					}
					else if(hr == 23)
					{
						printf("0000\n");
					}
					else
					{
						printf("%d00\n",hr+1);
					}

				}
			}

			
		}
		else
		{
			min=min+tot_min;
			
			if(flag==1)	printf("%d%d\n",hr,min);
			else	
			{
				if(min+1 <= 60)	printf("%d%d\n",hr,min+1);
				else	
				{
					if(hr < 23)	printf("%d00\n",hr);
					else	printf("0000\n");
				}
			}

		}

		

	}	

	return 0;
}