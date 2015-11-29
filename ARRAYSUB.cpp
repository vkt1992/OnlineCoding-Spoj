#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int getmid(int s,int e)
{
	return s+(e-s)/2;
}


int getsumutil(int *st,int ss,int se,int qs,int qe,int index)
{
	if(qs<=ss && se<=qe)	return st[index];

	if(ss > qe || se <qs)	return 0;

	int mid=getmid(ss,se);

	return max(getsumutil(st,ss,mid,qs,qe,(2*index)+1),getsumutil(st,mid+1,se,qs,qe,(2*index)+2));
}

int getsum(int *st,int n,int qs,int qe)
{

	return getsumutil(st,0,n-1,qs,qe,0);
}

int constructstutil(int arr[],int ss,int se,int *st,int si)
{
	if(ss==se)
	{
		st[si]=arr[ss];
		return arr[ss];
	}
	else
	{
		int mid=getmid(ss,se);
		st[si]=max(constructstutil(arr,ss,mid,st,(2*si)+1), constructstutil(arr,mid+1,se,st,(2*si)+2)); 
	}
	return st[si];
}

int *constructst(int arr[],int n)
{
	int x=(int)(ceil(log2(n)));
	int max_size=2*(int)pow(2,x)-1;
	int *st=new int[max_size];

	constructstutil(arr,0,n-1,st,0);

	return st;
}

int main()
{
	int n,arr[1000001],k,i,j;

	scanf("%d",&n);
	printf("\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&k);

	int *st=constructst(arr,n);

	for(i=0;i<n-(k-1);i++)
	{
		int res=getsum(st,n,i,i+k-1);
		printf("%d ",res);
	}


	return 0;
}
