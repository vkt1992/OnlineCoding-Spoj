#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
	int t,j=1;

	scanf("%d",&t);

	while(t--)
	{
		char s[1000010];
		std::vector<int> mylist;
		long long int len,i,res;

		scanf("%s",s);

		len=strlen(s);

		for(i=1;i<len;i++)
		{
			if(s[i]==s[0])
			{
				mylist.push_back(i);
			}

			for(int mypos=0;mypos<mylist.size();++mypos)
			{
				int elemnt;
				elemnt=mylist[mypos];
				if(s[i-elemnt]!=s[i])
				{
					if(mypos!=0)
					{
						mylist.erase(mylist.begin()+mypos);	
					}
					else
					{
						mylist.erase(mylist.begin());
					}
					
				}
			}
		}

		res=mylist.size();
		printf("Case %d: %lld\n",j,res);
		j++;


	}

	return 0;

}
