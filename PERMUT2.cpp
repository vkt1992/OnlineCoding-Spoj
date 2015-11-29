#include <stdio.h>
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);

		if(n==0)	break;
		else
		{	
			int arr[n+2],rray[n+2],i;

			for(i=1;i<=n;i++)
			{
				scanf("%d",&arr[i]);
				rray[arr[i]]=i;
			}

			int flag=1;

			for(i=1;i<=n;i++)
			{
				if(rray[i]!=arr[i])	
				{
					flag=0;
					break;
				}
			}

			if(flag==1)	printf("ambiguous\n");
			else printf("not ambiguous\n");
		}
	}

	return 0;
}