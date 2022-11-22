#include<stdio.h>

typedef struct ilist_s
{
	int val;
	struct ilist_s* next;
}
ilist_t;


int conta_el(ilist_t* h)
{
	if(h==NULL)
	{
		return 0;
	}
	return 1+conta_el(h->next);
}