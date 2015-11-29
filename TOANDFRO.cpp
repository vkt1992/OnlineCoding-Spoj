#include <iostream>
#include <string.h>
#include <stdio.h>

char str[10000][100];

int main()
{
	while(1)
	{
		int x_cnt=0,pos=0,len,i,j,n;
		char mystr[1000];

		scanf("%d",&n);


		if(n==0)	break;
		else
		{	
			
			scanf("%s",mystr);
			len=strlen(mystr);

			while(1)
			{
				if(x_cnt%2==0)
				{
					for(i=0;i<n;i++)
					{
						str[x_cnt][i]=mystr[pos++];
						//printf("%d  ",i);
					}
					//printf("\n");
				}
				else
				{
					for(i=n-1;i>=0;i--)
					{
						str[x_cnt][i]=mystr[pos++];
						//printf("%d  ",i);
					}
					//printf("\n");
				}
				

				if(pos==len)	{

					break;
				}

				x_cnt++;
			}
		}

		for(j=0;j<n;j++)
		{
			for(i=0;i<=x_cnt;i++)
			{
				printf("%c",str[i][j]);
			}
		}

		printf("\n");
	}	

	return 0;
}