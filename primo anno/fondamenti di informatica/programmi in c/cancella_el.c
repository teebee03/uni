ilist_t* cancella_el(ilist_t* h,int num)
{
	ilist_t *pre,*del;
	
	while(h!=NULL && h->val==num)
	{
		del=h;
		h=del->next;
		free(del);
	}
	
	if(h!=NULL)
	{
		pre=h;
		while(pre->next!=NULL)
		{
			if(pre->next->val==num)
			{
				del=pre->next;
				pre->next=del->next;
				free(del);
			}
			else
			{
				pre=pre->next;
			}
		}
	}
	 
	return h;
}