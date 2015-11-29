#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

int  main()
{
	int t;

	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,cnt[10],sort[10],j,temp,size,curr_pos,count,top,mypos;
		queue<int>que_ele;
		queue<int>que_pos;
		set<int>st;

		scanf("%d%d",&n,&m);

		for(i=0;i<=9;i++)	cnt[i]=0;

		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			que_ele.push(temp);
			que_pos.push(i);
			cnt[temp]++;
			st.insert(temp);
		}

		j=0;

		for(set<int>::iterator it=st.begin();it!=st.end();it++)
		{
			sort[j++]=*it;
		}

		size=j;
		curr_pos=size-1;
		count=0;

		while(!que_ele.empty())
		{
			top=que_ele.front();
			mypos=que_pos.front();

			if(mypos==m && top==sort[curr_pos] && cnt[top]!=0)	break;
			else
			{
				if(top==sort[curr_pos] && cnt[top]!=0)
				{
					count++;
					que_ele.pop();
					que_pos.pop();
					cnt[top]--;

					if(cnt[top]==0)
					{
						curr_pos=curr_pos-1;
					}
				}
				else
				{
					que_ele.pop();
					que_pos.pop();
					que_ele.push(top);
					que_pos.push(mypos);	
				}
			}
		}

		printf("%d\n",count+1);
	}

	return 0;
}