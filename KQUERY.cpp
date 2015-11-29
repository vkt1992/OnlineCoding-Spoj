/*

GETTING TLE

*/

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int finput()
{
    char c=getchar();

    while(c <'0' || c> '9') c=getchar();

    int ret=0;

    while(c>='0' && c<='9')
    {
        ret=10*ret + c -48;
        c=getchar();
    }
    return ret;
}

void foutput(int n)
{
    if(n==0)
    {
        putchar('0');

    }
    else{
        if(n < 0){
            putchar('-');
            n*=-1;
        }
        char temp[64];
        int sze=0;
        while(n > 0){
            temp[sze++]= '0' + n%10;
            n/=10;
        }
        for(int i=sze-1;i>=0;i--)
        {
            putchar(temp[i]);
        }
    }
}


int getmid(int s,int e)
{
	return s+(e-s)/2;
}

int getsumutil(int *st,int ss,int se,int qs,int qe,int index)
{
	if(qs<=ss && se<=qe)	return st[index];

	if(ss > qe || se <qs)	return 0;

	int mid=getmid(ss,se);

	return getsumutil(st,ss,mid,qs,qe,(2*index)+1) + getsumutil(st,mid+1,se,qs,qe,(2*index)+2);
}

int getsum(int *st,int n,int qs,int qe)
{
	return getsumutil(st,0,n-1,qs,qe,0);
}

int constructstutil(int arr[],int ss,int se,int *st,int si,int k)
{
	if(ss==se)
	{
		//st[si]=arr[ss];

		if(arr[ss] > k)
		{
			st[si]=1;
			return 1;
		}
		else
		{
			st[si]=0;
			return 0;
		}
		
	}
	else
	{
		int mid=getmid(ss,se);
		st[si]=constructstutil(arr,ss,mid,st,(2*si)+1,k) + constructstutil(arr,mid+1,se,st,(2*si)+2,k); 
	}
	return st[si];
}

int *constructst(int arr[],int n,int k)
{
	int x=(int)(ceil(log2(n)));
	int max_size=2*(int)pow(2,x)-1;
	int *st=new int[max_size];

	constructstutil(arr,0,n-1,st,0,k);

	return st;
}

int main()
{
	int n,i,arr[30001],q;

	n=finput();

	for(i=0;i<n;i++)	
	{
		arr[i]=finput();
	}

	
	q=finput();

	while(q--)
	{
		int r,s,k,res;
		//scanf("%d%d%d",&r,&s,&k);
		r=finput();
		s=finput();
		k=finput();

		int *st=constructst(arr,n,k);
		res=getsum(st,n,r-1,s-1);

		foutput(res);

		printf("\n");
		//printf("%d\n",res);
	}

	return 0;

}

