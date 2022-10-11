#include<stdio.h>
int main(int argc,char* argv[])
{
	int fine,dato,min,max,media,cont,tot;
	printf("inserisci fine: ");
	scanf("%d",&fine);

	printf("inserisci dato: ");
	scanf("%d",&dato);
	min=dato;
	max=dato;
	tot=dato;

	cont=1;

	
	while(dato!=fine)
	{
		if(dato<min)
		{
			min=dato;
		}
		else if(dato>max)
		{
			max=dato;
		}
		tot+=dato;
		cont++;

		printf("inserisci dato: ");
		scanf("%d",&dato);
	}
	media=tot/cont;
}
