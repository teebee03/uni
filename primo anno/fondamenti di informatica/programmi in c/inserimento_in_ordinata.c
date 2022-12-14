/*
in: lista ordinata in ordine crescente e intero
out: inserisce elemento in lista preservando ordine crescente della lista
*/
ilist_t* ins_ord(ilist_t* h,int num)
{
	ilist_t *temp = NULL;
	ilist_t *temp2 = NULL;
	for(temp=h; temp!=NULL && temp->next!=NULL && temp->next->val<num ;temp=temp->next)
	/*temp di next e maggiore di val || temp->next==NULL*/
	/*devo inserire su temp di next*/
	temp2=temp->next;
	temp->next=malloc(sizeof(ilist_t));
	temp->next->next=temp2;
	
	return h;
}
