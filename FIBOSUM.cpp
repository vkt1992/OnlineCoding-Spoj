#include <stdio.h>
# define mod 1000000007

void multiply(long long int f[2][2],long long int m[2][2])
{
	long long int x=((f[0][0]%mod*m[0][0]%mod)%mod + (f[0][1]%mod*m[1][0]%mod)%mod)%mod;
	long long int y=((f[0][0]%mod*m[0][1]%mod)%mod + (f[0][1]%mod*m[1][1]%mod)%mod)%mod;
	long long int z=((f[1][0]%mod*m[0][0]%mod)%mod + (f[1][1]%mod*m[1][0]%mod)%mod)%mod;
	long long int w=((f[1][0]%mod*m[0][1]%mod)%mod + (f[1][1]%mod*m[1][1]%mod)%mod)%mod;
	
	f[0][0]=x%mod;
	f[0][1]=y%mod;
	f[1][0]=z%mod;
	f[1][1]=w%mod;
}

void power_matrix(long long int f[2][2],long long int n)
{
	if(n==0 || n==1)
		return;
	long long int temp[2][2]={{1,1},{1,0}};
	power_matrix(f,n/2);
	multiply(f,f);

	if(n%2!=0)
		multiply(f,temp);
}

long long int Fibonacci(long long int n)
{
	long long int f[2][2]={{1,1},{1,0}};
	if(n==0)
		return 0;
	power_matrix(f,n-1);
	return f[0][0]%mod;
}	

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		long long int n,m,sum,part1,part2;
		
		scanf("%lld%lld",&n,&m);
		
		part1=(Fibonacci(m+2)%mod-1%mod)%mod;
		
		if(n!=0)
		{
			long long int cnt;
			cnt=n-1;
			part2=(Fibonacci(cnt+2)%mod-1%mod)%mod;
		}
		else
		{
			part2=0;
		}

		sum=(part1%mod-part2%mod)%mod;

		if(sum >= 0)
		{
			printf("%lld\n",sum%mod);
		}
		else
		{
			sum=sum+mod;
			sum=sum%mod;
			printf("%lld\n",sum);
		}
		
	}

	return 0;
}


/*
logic:

Now sum of a series of Fibonacci numbers [n,m] is given by sum(m) – sum(n-1),
where sum(i) is the sum of Fibonacci series upto i th term.
Also sum(n) = F(n+2) – 1, where F(i) is the i th Fibonacci number.

sum=part1-part2;
sum=sum(m)-sum(n-1)
cnt=n-1;
sum=(fibo(m+2)-1) - (fibo(cnt+2)-1) 
	

*/