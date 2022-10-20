/*
popola array di valori reali (stop allo 0) (arriva come parametro dim max)
*/

#include<stdio.h>

#define DIM 3

void load_vet(int[],int,int*);

int main(int argc, char* argv[])
{
	int vet[DIM],dim,i;
	
	load_vet(vet,DIM,&dim);
	
	
	printf("\n\n%d",dim);
	for(i=0;i<dim;i++)
	{
		printf("%d",vet[i]);
	}
	printf("\n\n");
}





void load_vet(int vet[],int dim,int* i)
{
	int temp;
	
	*i=0;
	scanf("%d",&temp);
	while(temp!=0)
	{
		if(*i<dim)
		{
			vet[*i]=temp;
			(*i)++;
		}
		scanf("%d",&temp);
	}
}