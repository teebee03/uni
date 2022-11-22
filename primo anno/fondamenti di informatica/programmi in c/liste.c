/*
l'utente inserisce dei valori e termina l'inserimento con un valore sentinella
stampare i valori maggiori della media dei valori
*/
#include<stdio.h>

typedef struct ilist_s
{
	int val;
	struct ilist_s* next;
}
ilist_t;

ilist_t* append(ilist_t*,int);

int main(int argc,char* argv[])
{
	ilist_t* h =NULL;
	ilist_t* el;
	
	int stop,num,tot,cont;
	float avg;
	
	printf("inserisci sentinella: ");
	scanf("%d",&stop);
	
	scanf("%d",&num);
	while(num!=stop)
	{
		h=append(h,num);
		scanf("%d",&num);
	}
	
	tot=0;
	cont=0;
	el=h;
	while(el!=NULL)
	{
		tot+=el->val;
		cont++;
		el=el->next;
	}
	
	if(cont>0)
	{
		avg=(float)tot/cont;
		for(el=h;el!=NULL;el=el->next)
		{
			if(el->val > avg)
			{
				printf("%d\t",el->val);
			}
		}
		freelist(h);
	}
	
	return 0;
}