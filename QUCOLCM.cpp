#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		map<int,int>mp;
		int m,n,st=-1,count;
		scanf("%d",&count);

		while(count--)
		{

			scanf("%d%d",&m,&n);

			if(st < m)	st=m;

			if(mp[m])	{

						if(n < mp[m])	mp[m]=n;	
						}
			else	mp[m]=n;

		}

		//std::cout << it->first << " => " << it->second << '\n';
		int ist=0,lst=0,mycnt=0,flag=0;
		for (std::map<int,int>::iterator it=mp.begin(); it!=mp.end(); ++it)	 
		{
			if(flag==0)
				{
					ist=it->first;
					lst=it->second;
					mycnt++;
					flag=1;
				}	
				else
				{

					if(it->first > ist && it->second <=lst)
					{
						ist=it->first;
						lst=it->second;
					}
					else if(it->first > lst)
					{
						ist=it->first;
						lst=it->second;
						mycnt++;
					}	

				}
   		}
	
		cout<<mycnt<<endl;
	}

	return 0;
	
}