#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <utility> 
#include <algorithm>
using namespace std;

int main()
{
		vector<pair<string,int> >vct;
		string str,cpy;
		int len,i;
		cin>>str;

		len=str.size();

		for(i=0;i<len;i++)
		{
			cpy=str.substr(i,len);
			vct.push_back(make_pair(cpy,i));
		}
		
		sort(vct.begin(),vct.end());

		for(i=0;i<len;i++)
		{
			printf("%d\n",vct[i].second);
		}

	return 0;
}
