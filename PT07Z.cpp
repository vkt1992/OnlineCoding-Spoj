#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

int visited[10001],dist[10001];
vector<int> node[10000];

void bfs(int src)
{
	queue<int>q;
	int i;
	visited[src]=1;
	q.push(src);

	while(!q.empty())
	{
		int ele=q.front();
		q.pop();
		for(int v=0;v<node[ele].size();v++)
		{
			int pos=node[ele][v];
			if(visited[pos]==-1)
			{
				visited[pos]=1;
				dist[pos]=dist[ele]+1;
				q.push(pos);
			}
		}
	}
}

int main()
{
	int n,i;
	int src,dest;
	scanf("%d",&n);

	if(n==0 || n==1)	printf("0\n");
	else
	{

		for(i=1;i<=n-1;i++)
	{
		scanf("%d%d",&src,&dest);
		node[src].push_back(dest);
		node[dest].push_back(src);
	}

	for(i=1;i<=n;i++)
	{
		visited[i]=-1;
		dist[i]=0;
	}

	bfs(1);

	int node_pos,mixima=dist[1];

	for(i=2;i<=n;i++)
	{
		if(mixima < dist[i])	
		{
			mixima=dist[i];
			node_pos=i;
		}
	}

	for(i=1;i<=n;i++)
	{
		visited[i]=-1;
		dist[i]=0;
	}


	bfs(node_pos);

	mixima=dist[1];

	for(i=2;i<=n;i++)
	{
		if(mixima < dist[i])	
		{
			mixima=dist[i];
			node_pos=i;
		}
	}

	printf("%d\n",mixima);


	}
	return 0;
}