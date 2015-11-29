#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	if(n%10==0)	printf("2\n");
	else
	{
		int temp;
		temp=n%10;
		printf("1\n");
		printf("%d\n",temp);
	}

	return 0;
}