#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int t;
	char st[30];
	scanf("%d",&t);
	gets(st);
	while(t--){

		int len,i=0,res=0,count=0,last_len,last_pos,j,temp,flag=0,declr=0;
		char str[20001];
		//cout<<"hello"<<endl;
		gets(str);
		len=strlen(str);
		//cout<<"len: "<<len<<endl;
		while(i<=len-1)
			{
				//cout<<int(str[i]);
				if(flag==0)
				{
					if(str[i]==' ' || str[j]=='\r' || str[j]=='\n' || str[j]=='\t')	
					{
						i++;
					}
					else
					{
						declr=1;
						flag=1;
						temp=i;
					}
				}
				else
				{
					if(str[i]==' ' || str[j]=='\r' || str[j]=='\n' || str[j]=='\t')
					{
						i++;
						break;
					}
					else
					{
						i++;
						declr=1;
					}
				}
			//cout<<"hello";
			}

		last_len=i-temp;
		count=1;
		res=1;

		//cout<<"last_len:"<<i<<":"<<i<<endl;

		for(j=i;j<len;j++)
		{
			
			if(str[j]==' ' || str[j]=='\r' || str[j]=='\n' || str[j]=='\t')
			{
				
				//cout<<"j : "<<j<<endl;
				if(j!=i)
				{
					if(j-last_pos-1==last_len)
					{
						count++;
						res=max(res,count);
						//cout<<"incount"<<count<<":"<<j<<endl;
						//cout<<"inres"<<res<<":"<<j<<endl;
					}
					else
					{
						last_len=j-last_pos-1;
						count=1;
						//cout<<"elsecount"<<count<<":"<<j<<endl;
						//cout<<"elselastlen"<<last_len<<":"<<j<<endl;
					}	
				}
				
				last_pos=j;
				//cout<<"last_pos"<<last_pos<<":"<<j<<endl;
			}
			else
			{
				if(j==len-1)
				{
					if(j-last_pos==last_len)
					{
						count++;
						res=max(res,count);
						//cout<<"elseincount"<<count<<":"<<j<<endl;
						//cout<<"elseinres"<<res<<":"<<j<<endl;
					}
				}

				declr=1;
			}
			
		}

		if(len==0 || declr==0)	printf("0\n");

		else printf("%d\n",res);

	}

	return 0;
}