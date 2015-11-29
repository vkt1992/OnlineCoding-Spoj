#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
using namespace std;

long long int tree[1000001]={0},maxval,rray[1000001];



/*
void finput(long long int &x)
{
  char c = getchar_unlocked();//this will read the first character.
  while(c<'0' || c>'9')
   {
   	c = getchar_unlocked();//if the first character not between 0 & 9 this while loop will work
   	//untill it get the valid integer between 0 & 9
   }

  x=0;
  while(c>='0' && c<='9')
  {
   x = 10 * x + c - 48;
   c = getchar_unlocked();//rest of the characters goes here.
  }
}*/

long long int finput()
{
    char c=getchar();

    while(c <'0' || c> '9') c=getchar();

    long long int ret=0;

    while(c>='0' && c<='9')
    {
        ret=10*ret + c -48;
        c=getchar();
    }
    return ret;
}

long long int foutput(long long int n)
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
        int sze=0,i;
        while(n > 0){
            temp[sze++]= '0' + n%10;
            n/=10;
        }
        for(i=sze-1;i>=0;i--)
        {
            putchar(temp[i]);
        }
    }
}

long long int read(long long int idx)
{
	long long int sum=0;

	while(idx > 0) {

		sum+=tree[idx];
		idx-=(idx & -idx);
	}

	return sum;
}

void update(long long int idx,int val)
{
	while(idx <=maxval) {

		tree[idx]+=val;
		idx+=(idx & -idx);
	}
}


int  main()
{
	long long int n,k,i,indx2,indx1,pos;

	//scanf("%lld%lld",&n,&k);
	finput(n);
	finput(k);
	maxval=n;

	for(i=0;i<k;i++)
	{
		//scanf("%lld%lld",&indx1,&indx2);
		finput(indx1);
		finput(indx2);
		update(indx1,1);

		if(indx2 < n) update(indx2+1,-1);
	}

	for(i=0;i<n;i++)
	{
		rray[i]=read(i+1);
	}

	sort(rray,rray+n);
	pos=n/2;

	foutput(rray[pos]);
	//printf("%lld\n",rray[pos]);

	return 0;
}