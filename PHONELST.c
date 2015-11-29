#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int flag; 

typedef struct trie_node
{
	int value;
	struct trie_node *child[11];
}my_trie_node;

typedef struct trie
{
	my_trie_node *root;
	int count;
}my_trie;

my_trie_node* getnode()
{
	int i;
	my_trie_node *node=NULL;

	node = (my_trie_node *)malloc(sizeof(my_trie_node));

	if(node)
	{
		node->value=0;
		for(i=0;i<=9;i++)
		{
			node->child[i]=NULL;
		}
	}
	return node;
}

void initialize(my_trie *ptrie)
{
	ptrie->root=getnode();
	ptrie->count=0;
}

void insert(my_trie *ptrie,char key[])
{
	int level,len,index,myflag=0;
	len=strlen(key);
	my_trie_node *pcrawl;
	ptrie->count++;

	pcrawl=ptrie->root;

	for(level=0;level<len;level++)
	{
		index=key[level]-48;
		if(pcrawl->child[index]==NULL)
		{
			pcrawl->child[index]=getnode();
			myflag=0;
		}
		
		else
		{
			myflag=1;
		}

		pcrawl=pcrawl->child[index];
		if(pcrawl->value > 0)	flag=1;

	}

	pcrawl->value=ptrie->count;
	if(myflag==1)	flag=1;

}


int main()
{
	int t,n,i;
	
	scanf("%d",&t);
	

	while(t--)
	{
		flag=0;
		my_trie mytrie;
		initialize(&mytrie);
		char digit[11];

		scanf("%d",&n);

		while(n--)
		{
			scanf("%s",digit);
			insert(&mytrie,digit);
		}

		if(flag==1)
		{
			printf("NO\n");
		}	
		else
		{
			printf("YES\n");
		}
		
	}

	return 0;
}