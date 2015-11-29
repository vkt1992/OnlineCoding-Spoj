#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	while(1)
	{
		char str[1000000];
		int len,ascii,flag,done=0,chck,i;
		cin.getline(str,1000000);

		len=strlen(str);

		if(len==1 && str[0]=='*')	break;

		for(i=0;i<len;i++) {

			if(i==0)
			{
				ascii=str[i];
				if(ascii < 96)	flag=str[i]-64;
				else	flag=str[i]-96;
			}
			else
			{
				if(ascii==32)	
				{
					chck=str[i];
					if(chck < 96)	chck=chck-64;
					else	chck=chck-96;

					if(flag!=chck)	
					{
						done=1;
						break;
					}
					ascii=str[i];
				}
				else
				{
					ascii=str[i];
						
				}
			}

		}
		if(done==0)	printf("Y\n");
		else	printf("N\n");
	}

	return 0;
}