/*
VERDICT: AC
*/


#include<iostream>
#include<stdio.h>
using namespace std;

int mod(int a)
{
	if(a < 0)	return (-1)*(a);
	else return (a);	
}

int main()
{
	int t;

	scanf("%d",&t);

	while(t--) {

		int n,m,rray[200][200],i,j,iarr[33129],jarr[33129],pos=0;
		char str[200][200];

		scanf("%d%d",&n,&m);

		for(i=0;i<n;i++)	{

			scanf("%s",str[i]);

			for(j=0;j<m;j++)	
			{
				if(str[i][j]=='1')
				{
					iarr[pos]=i;
					jarr[pos]=j;
					rray[i][j]=1;
					pos++;
				}
				else
				{
					rray[i][j]=0;
				}
			}
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				int res=370;
				int k=rray[i][j];

				if(k==1) printf("0 ");
				else
				{

					for(int p=0;p<pos;p++)
					{
						int dis=mod(iarr[p]-i)+mod(jarr[p]-j);
						if(res > dis)	res=dis;
					}

				printf("%d ",res);
				}

				
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
