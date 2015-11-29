#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	long long int num,flag;
	scanf("%lld",&num);
	
	flag=num & (num-1);

	if(flag==0)	printf("TAK\n");
	else printf("NIE\n");
	return 0;
}