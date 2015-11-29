/*
Totient function :

the positive integers less than or equal to n that are relatively prime to n. Thus, if n is a positive integer, 
then φ(n) is the number of integers k in the range 1 ≤ k ≤ n 
for which the greatest common divisor gcd(n, k) = 1

φ(36)=φ(2^2*3^2)=36*(1- 1/2)*(1-1/3)
φ(n)=n*(1-1/p1)*(1-1/p2)...
where p1,p2,p3 are prime numbers which divides n.

*/

#include <stdio.h>
#include <math.h>
int totient(int n)
{
	int result=n;

	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n/=i;
			}

			result=result-result/i;
		}
	}

	if(n > 1)
	{
		result=result - result/n;
	}

	return result;

}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,res;
		scanf("%d",&n);
		res=totient(n);
		printf("%d\n",res);
	}

	return 0;
}