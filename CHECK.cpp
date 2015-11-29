#include<stdio.h>
#include<string.h>
#include<list>
#include<queue>
#include<set>
#include<stdlib.h>
#include<stack>
#include<math.h>
#include<iostream>
using namespace std;
#define rd readInt()
#define MAXX(a,b) ((a)>(b)?(a):(b))
#define MINN(a,b) ((a)<(b)?(a):(b))
#define FOR(a,b) for(a=0;a<b;a++)
#define sdd(a) scanf("%lld",&a);
#define PUTCHAR putchar_unlocked
int dp[1000010];
int main()
{
int a,b,m,c;
scanf("%d %d %d",&a,&b,&m);
if(a>b)
{
c=a;
a=b;
b=c;
}
long int i;
dp[0] = 2;
dp[1] = 1;
for(i=2;i<=1000000;i++)
{
if(i< a)
{
dp[i] = (i)%2;
}
else if(i==a || i==b)
{
dp[i] = 1;
}
else
{
int flag=0;
if(i-1-a>=0 && dp[i-1-a] != 1)
flag = 1;
if(i-1-1>=0 && dp[i-2]!=1)
flag = 1;
if(i-1-b >=0 && dp[i-1-b]!=1)
flag = 1;
if(flag == 0)
{
dp[i] = 1;
continue;
}
flag=0;
if(i-a-a>=0 && dp[i-a-a] != 1)
flag = 1;
if(i-a-1>=0 && dp[i-a-1]!=1)
flag = 1;
if(i-a-b >=0 && dp[i-a-b]!=1)
flag = 1;
if(flag == 0)
{
dp[i] = 1;
continue;
}
flag=0;
if(i-b-a>=0 && dp[i-b-a] != 1)
flag = 1;
if(i-b-1>=0 && dp[i-b-1]!=1)
flag = 1;
if(i-b-b >=0 && dp[i-b-b]!=1)
flag = 1;
if(flag == 0)
{
dp[i] = 1;
continue;
}
else
{
dp[i] = 0;
}
}
}
long int aa;
for(i=0;i<m;i++)
{
scanf("%ld",&aa);
if(dp[aa]==0)
printf("B");
else
printf("A");
}
printf("\n");
return 0;
}