/*
Hint : simple bfs
verdict: AC
*/
#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
#define inp(i)	scanf("%d",&i)

int rray[3001][3001],visited[3001];

int bfs(int src,int bug)
{
	queue<int>q;
	q.push(src);

	visited[src]=1;

	while(!q.empty())
	{
		int u=q.front();
		q.pop();

		for(int v=1;v<=bug;v++)
		{
			if(rray[u][v]==1 && visited[v]==-1)
			{
				if(visited[u]==1)
				{
					visited[v]=0;
				}
				else
				{
					visited[v]=1;
				}
				q.push(v);
			}
			else if(rray[u][v]==1 && visited[u]==visited[v])	
			{
				return 0;
			}
		}
	}

	return 1;
}

int main()
{
	int t,jj=1;
	inp(t);

	while(t--)
	{
		int bug,intr,m,f,check=0,i,j;

		inp(bug);
		inp(intr);

		for(i=0;i<=bug;i++)
		{
			for(j=0;j<=bug;j++)
			{
				rray[i][j]=0;
			}
		}

		for(i=0;i<=bug;i++)	visited[i]=-1;

		for(i=1;i<=intr;i++)
		{	
			inp(m);
			inp(f);
			rray[m][f]=1;
			rray[f][m]=1;
		}

		for(i=1;i<=bug;i++)
		{
			if(visited[i]==-1)
			{
				int flag=bfs(i,bug);

				if(flag==0){
				
				check=1;
				break;

			}
			}
			
		}
			if(check==0)
			{
				printf("Scenario #%d:\n",jj);
				printf("No suspicious bugs found!\n");
			}
			else if (check==1)
			{
				printf("Scenario #%d:\n",jj);
				printf("Suspicious bugs found!\n");
			}
			
			jj++;
	}
	return 0;
}