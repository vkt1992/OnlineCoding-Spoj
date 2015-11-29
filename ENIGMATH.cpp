/*
x=B and y=A is correct solution but we want minimum answer
For example 2*x-4*y=0 
Answer is not 4 and 2 but the correct answer is 2 and 1 .
So here right formula is x=B/GCD(A,B) and y=A/GCD(A,B). 
*/



#include <stdio.h>
long long int gcd(long long int a,long long int b)
{
	if(b==0)	return a;

	return gcd(b,a%b);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,a_ans,b_ans,GCD;
		scanf("%lld%lld",&a,&b);
		GCD=gcd(a,b);
		a_ans=b/GCD;
		b_ans=a/GCD;
		printf("%lld %lld\n",a_ans,b_ans);
		printf("\n");
	}
	return 0;
}