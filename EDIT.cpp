#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int e[2001][2001];

int diff(char str1[],char str2[],int pos1,int pos2)
{
	if(str1[pos1-1]==str2[pos2-1])	return 0;
	else return 1;

}

int compute(char str1[],char str2[]) 
{

	
	int len1,len2,i,j;
	len1=strlen(str1);
	len2=strlen(str2);

	for(i=0;i<=len1;i++)
	{
		for(j=0;j<=len2;j++)
		{
			if(i==0){

				e[i][j]=j;
			}

			else
			{
				if(j==0)
				{
					e[i][j]=i;
				}
				else
				{
					int a,b,c,d;
					a=e[i-1][j-1]+diff(str1,str2,i,j);
					b=e[i][j-1]+1;
					c=e[i-1][j]+1;
					d=min(b,c);
					e[i][j]=min(a,d);	

				}
			}

			//cout<<e[i][j]<<" ";
		}

		//cout<<endl;
	}

	return e[len1][len2];
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t--) {

		char str1[2001],str2[2001];
		int res,len1,len2,i;

		scanf("%s",str1);
		scanf("%s",str2);
	
		res=compute(str1,str2);

		printf("%d\n",res);
	}

	return 0;
}