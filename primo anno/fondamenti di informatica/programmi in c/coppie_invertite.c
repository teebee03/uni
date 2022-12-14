/*
in: l1
out: elementi di l1 presi a coppie e invertite (se lista dispari l'ultimo elemento viene aggiunto alla fine)
*/
ilist_t* inverti_coppie(ilist_t *h1)
{
	ilist_t *h2 = NULL;
	ilist_t *temp1 = h1;
	while(temp1!=NULL)
	{
		if(temp1->next==NULL)
		{
			h2=append(h2,temp1->val);
			temp1=temp1->next;
		}
		else
		{
			h2=append(h2,temp1->next->val);
			h2=append(h2,temp1->val);
			temp1=temp1->next;
			temp1=temp1->next;
		}
	}
	return h2;
}
