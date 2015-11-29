#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
	

	while(1)
	{
		int n;
		float area;

		scanf("%d",&n);

		if(n==0)	break;

		else
		{
			area=(3.14*n*n)/2;
			printf("%.2f\n",area);
		}
	}

	return 0;
}