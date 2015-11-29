#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <utility> //header file for using pair
#include <algorithm>
using namespace std;

int main()
{
	int n;

	scanf("%d",&n);

	while(n--)
	{
		vector<pair<string,int> >vct;
		string str,temp,cpy;
		int len,i;
		cin>>str;

		len=str.size();
		
		temp=str;
		str=str+temp;

		for(i=0;i<len;i++)
		{
			cpy=str.substr(i,len);
			vct.push_back(make_pair(cpy,i+1));
		}
		
		sort(vct.begin(),vct.end());

		printf("%d\n",vct[0].second);

	}

	return 0;
}
