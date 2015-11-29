#include<iostream>
#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;

int main()
{
	int p,j;

	scanf("%d",&p);
	while(p--)
	{
		int len,i;
		map<string,int>mp;
		string str;
		
		cin>>j;
		cin>>str;

		for(i=0;i<40;i++)
		{
			if(i>=2){

				string mystr;
				mystr=str.substr(i-2,3);
				//cout<<"mystr: "<<mystr<<endl;

				if(mp[mystr])	mp[mystr]++;

				else mp[mystr]=1;

			}
		}

		printf("%d %d %d %d %d %d %d %d %d\n",j,mp["TTT"],mp["TTH"],mp["THT"],mp["THH"],mp["HTT"],mp["HTH"],mp["HHT"],mp["HHH"]);	
		j++;

	}	
	return 0;
}
