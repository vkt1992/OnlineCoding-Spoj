#include <iostream>
#include <stdio.h>
#include <stack>
#include <queue>
using namespace std;

int main()
{

	while(1)
	{
		int n,i,rray[1001],k=1;
		scanf("%d",&n);

		stack <int> stck;
		queue <int> que;

		if(n==0)	break;

		for(i=1;i<=n;i++)	
		{
			scanf("%d",&rray[i]);

			if(k==rray[i])
			{
				que.push(rray[i]);
				//cout<<"queue.push: "<<rray[i]<<endl;
				k++;
			}
			else
			{
				if(!stck.empty())
				{	
					int myflag=0;
					while(!stck.empty())
				{
					if(k==stck.top())
					{
						//cout<<"top:"<<stck.top()<<endl;
						que.push(stck.top());
						stck.pop();
						k++;
					}
					else
					{
						if(k==rray[i])
						{
							//cout<<"scnd top:"<<stck.top()<<endl;
							que.push(stck.top());	
							myflag=1;
							k++;
						}
						else
						{
							break;
						}
					}
				}

				if(myflag==0)
				{
					stck.push(rray[i]);
					//cout<<"2.st.push: "<<rray[i]<<endl;		
				}

				}
				
				else
				{
					stck.push(rray[i]);
					//cout<<"3.st.push: "<<rray[i]<<endl;
				}
				
			}
		}

		int flag=0;
		while(!stck.empty())
		{
			if(k==stck.top())
			{
				que.push(stck.top());
				k++;
				stck.pop();
				
			}
			else
			{
				flag=1;
				break;
			}
		}

		if(flag==1)	printf("no\n");

		else if(flag==0 && k==n+1) printf("yes\n");	

	}

	return 0;
}