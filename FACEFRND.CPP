#include<iostream>
#include<stdio.h>
#include<set>
using namespace std;

int main()
{
	int n;
	set<int>frd1;
	set<int>frd2;
	cin>>n;

	while(n--)
		{
			int num,frd;
			cin>>frd>>num;
			
			if(frd2.find(frd)==frd2.end())	frd1.insert(frd);
			else	frd2.erase(frd);
			{
				frd1.insert(frd);
				frd2.erase(frd);
			}			

			while(num--)
			{
				int frnd;
				cin>>frnd;

				if(frd1.find(frnd)==frd1.end())
				{
					frd2.insert(frnd);
				}
			}
		}

		int res;
		res=frd2.size();

		printf("%d\n",res);
		return 0;
}