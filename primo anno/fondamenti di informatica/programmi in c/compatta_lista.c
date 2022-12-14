/*
togliere valori duplicati o nulli da lista
*/
ilist_t* compatta_lista(ilist_t* h)
{
	ilist_t *p=NULL;
	ilist_t *curr=NULL;
	ilist_t *succ=NULL;
	ilist_t *del=NULL;
	p=h;
	
	if(p!=NULL)
	{
		while(p->next!=NULL)
		{
			curr=p;
			succ=p->next;
			while(succ!=NULL)
			{
				if(p->val==succ->val || succ->val == 0)
				{
					del=succ;
					curr->next=succ->next;
					succ=curr->next;
					free(del);
				}
				else
				{
					curr=succ;
					succ=succ->next;
				}
			}
			p=p->next;
		}
	}
	
	return h;
}