#include <iostream>
#include <queue>
#include <stdio.h>
#include <vector>
using namespace std;


long long int visited[100001],dist[100001],n;
vector <long long int> node[100001];

void bfs(long long int src)
{
	queue<long long int>q;
	long long int i;
	visited[src]=1;
	q.push(src);

	while(!q.empty())
	{
		long long int ele=q.front();
		q.pop();
		for(long long int v=0;v<node[ele].size();v++)
		{
			long long int pos=node[ele][v];
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
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		
		long long int hop,i;
		hop=n-1;

		for(i=0;i<=n;i++)
		{
			visited[i]=-1;
			dist[i]=0;
		}

		while(hop--)
		{
			long long int a,b;
			scanf("%lld%lld",&a,&b);
			node[a].push_back(b);
			node[b].push_back(a);
		}

		if(n==1)	printf("1\n");
		else
		{
				bfs(0);

		long long int node_pos,mixima=dist[0];

		for(i=1;i<n;i++)
		{
			if(mixima < dist[i])	
			{
				mixima=dist[i];
				node_pos=i;
			}
		}

		for(i=0;i<n;i++)
		{
			visited[i]=-1;
			dist[i]=0;
		}

		bfs(node_pos);

		mixima=dist[0];

		for(i=1;i<n;i++)
		{
			if(mixima < dist[i])	
			{
				mixima=dist[i];
				node_pos=i;
			}
		}

	//printf("maxima: %lld\n",mixima);

	if(mixima%2==0)
	{
		mixima=mixima/2;
		printf("%lld\n",mixima);
	}
	else
	{
		mixima=mixima/2;
		mixima=mixima+1;
		printf("%lld\n",mixima);
	}


		}

	
		
	}

	return 0;
}
