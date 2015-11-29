#include <stdio.h>
#include <algorithm>
using namespace std;

int  main()
{
	
	int n,k,i;
	
	scanf("%d%d",&n,&k);

	int rray[n+1];

	for(i=0;i<=n;i++)	
	{
		rray[i]=0;
	}

	while(k--)
	{
		int indx1,indx2;
		scanf("%d%d",&indx1,&indx2);

		rray[indx1]=rray[indx1]+1;
		if(indx2 < n)	rray[indx2+1]=rray[indx2+1]-1;
	}

	for(i=1;i<=n;i++)
	{	
		rray[i]=rray[i]+rray[i-1];
	}

	sort(rray+1,rray+n);

	printf("%d\n",rray[n/2]);

	return 0;
}