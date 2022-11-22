/*
sottopro
in: array di valori interi e altro parametro necessario
out: numeri primi presenti nell'array, senza duplicati e poi in ordine
*/
#include<stdio.h>

typedef struct ilist_s
{
	int val;
	ilist_s *next;
}
ilist_t;

ilist_t* solo_primi(int[],int);

int main(int argc,char* argv[])
{
	return 0;
}

/*
sottoprogrammi usati:
-isprimo
-is_in
-insert_in_order
*/
ilist_t* solo_primi(int arr[],int dim)
{
	ilist_t *h=NULL;
	int i;
	
	for(i=0;i<dim;i++)
	{
		if(isprimo(arr[i])==1 && is_in(h,arr[i])==0)
		{
			insert_in_order(h,arr[i]);
		}
	}
		
	return h;
}