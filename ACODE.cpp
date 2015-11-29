#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	while(1)
	{
		char str[5001];
		long long int count[5001];
		int len,i,flag=0;

		scanf("%s",str);

		len=strlen(str);

		if(len==1 && str[0]=='0')	break;

		else if(str[0]=='0')	
		{
			flag=1;
		}

		else
		{
			for(i=0;i<len;i++)
			{
				int perm=0;
				if(i==0)	count[i]=1;
				else
				{
					int curr,prev,tot,nxtot,nxt;
					curr=str[i]-48;
					prev=str[i-1]-48;
					tot=(prev*10)+curr;
					nxt=0;
					if(i+1 < len)	
					{
						perm=1;
						nxt=str[i+1]-48;
					}
					nxtot=(curr*10)+nxt;

					if(tot<=9 && tot > 0 && prev==0)
					{
						count[i]=count[i-1];
						
					}

					else if(tot <= 26 && tot > 0)
					{
						if(tot%10==0)
						{
							count[i]=count[i-1];
							
						}

						else
						{	
							if(nxtot%10==0 && perm==1)	
							{
								count[i]=count[i-1];
								
							}

							else if(count[i-1]==1)
							{
								count[i]=2;	
								
							}
							else
							{
								count[i]=count[i-1]+count[i-2];
								
							}
						}
						
					}
					else
					{
						if(tot%10==0)	
						{
							flag=1;
							break;
						}
						else
						{
							count[i]=count[i-1];
							
						}	
					}
				}

				
			}
		}

		if(flag==1)	printf("0\n");
	
		else
		{
			printf("%lld\n",count[len-1]);
		}	

	}

	return 0;
}
