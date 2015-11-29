#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--) {

		char str[410],res[410];
		int n,i,pos=0;
		stack<char>stck;
		scanf("%s",str);

		n=strlen(str);

		for(i=0;i<n;i++) {

			if(str[i] >= 97 && str[i] <= 122)
			{
				res[pos++]=str[i];
			}

			else if(str[i]==')')
			{
				if(!stck.empty())
				{
					res[pos++]=stck.top();
					stck.pop();
				}
			}
			else if(str[i]!='(')
			{
				stck.push(str[i]);
			}

		}

		for(i=0;i<pos;i++)
		{
			printf("%c",res[i]);
		}

		cout<<endl;
	}

	return 0;
}