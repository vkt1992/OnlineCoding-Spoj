/*
Here in this ques only trick is How to take input till eof
answer is "while(scanf("%s",str)==1)"

scanf("%s",str) return number of input given by user.
So scanf("%s",str)==1 

And rest is simple simulation.
*/

#include <stdio.h>
#include <string.h> 
#include <iostream>
using namespace std;

int main()
{
	char str[100000];	
	while(scanf("%s",str)==1)
	{
		int len,count,i;
		char lastchar;
		len=strlen(str);
		count=0;
		for(i=0;i<=len;i++)
		{
			if(i==0)
			{
				count++;
				lastchar=str[i];
			}
			else if(i < len)
			{
					if(lastchar!=str[i])
					{
						if(count > 3)
						{
							printf("%d!%c",count,lastchar);
						}
						else
						{
							for(int cnt=1;cnt<=count;cnt++)
							{
								printf("%c",lastchar);
							}
							
						}

						count=1;
						lastchar=str[i];
					}
					else
					{
						count++;
					}
			}
			else if(i==len)
			{
				if(count > 3)
						{
							printf("%d!%c\n",count,lastchar);
						}
						else
						{
							for(int cnt=1;cnt<=count;cnt++)
							{
								printf("%c",lastchar);
							}
							
						}
			}
		}
		printf("\n");
	}

	return 0;
}