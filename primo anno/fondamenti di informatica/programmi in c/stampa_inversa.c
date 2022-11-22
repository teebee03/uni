/*
in: sequenza di valori interi terminata quando l'utente inserisce 0
out: stampa inversa
*/

#include<stdio.h>
#define STOP 0

typedef struct ilist_s
{
	int val;
	struct ilist_s* next;
}
ilist_t;


/*
sottoprogrammi
-push
-freelist
*/
int main(int argc,char* argv[])
{
	ilist_t *h=NULL,*p;
	int val;
	
	scanf("%d",&val);
	while(val!=STOP)
	{
		h=push(h,val);
		scanf("%d",&val);
	}
	
	for(p=h;p!=NULL;p=p->next)
	{
		printf("%d\t",p->val);
	}
	printf("\n");
	
	freelist(h);
	
	return 0;
}

ilist_t* push(ilist_t* h,int val)
{
	ilist_t *temp;
	n=(ilist_t*)malloc(sizeof(ilist_t*));
	
	if(n!=NULL)
	{
		temp->val=val;
		temp->next=h;
		h=temp;
	}
	else
	{
		printf("errore allocazione memoria\n");
	}
	
	return h;
}

ilist_t* append(ilist_t* h,int val)
{
	ilist_t *slider,*temp;
	
	temp=(ilist_t*)malloc(sizeof(ilist_t));
	if(n!=NULL)
	{
		slider=h;
		while(slider->next!=NULL)
		{
			slider=slider->next;
		}
		
		temp->val=val;
		temp->next=NULL;
		
		slider->next=temp;
	}
	else
	{
		printf("erorre di allocazione\n");
	}
	
	return h;
}