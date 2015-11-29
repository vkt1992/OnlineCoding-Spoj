#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
#define input(i) scanf("%d",&i);

int  main()
{
	int t;

	input(t);

	while(t--) {

		printf("\n");

		int ng,nm,i,godzilla[1000000],mechzilla[1000000],ng_ptr,nm_ptr;

		input(ng);
		input(nm);

		for(i=0;i<ng;i++) input(godzilla[i]);
		
		for(i=0;i<nm;i++) input(mechzilla[i]);

		ng_ptr=0;
		nm_ptr=0;

		while(ng_ptr < ng && nm_ptr <nm)
		{
			if(godzilla[ng_ptr] < mechzilla[nm_ptr])	ng_ptr++;
			
			else if(godzilla[ng_ptr] >= mechzilla[nm_ptr]) nm_ptr++;
		}

		if(nm_ptr <nm && ng_ptr >=ng)	printf("MechaGodzilla\n");

		else if(nm_ptr >= nm && ng_ptr < ng) printf("Godzilla\n");
	}
	
	return 0;

}
