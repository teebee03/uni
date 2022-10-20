/*
in: quanti interi (50) e ricevi gli interi
out: il massimo
*/

#include<stdio.h>

#define MAX_DIM 50

int max(int[],int);

int main(int argc,char* argv[])
{
	int dim,vet[MAX_DIM],i;
	
	scanf("%d",&dim);
	while(dim<0||dim>MAX_DIM)
	{
		printf("\nBUCO\n");
		scanf("%d",&dim);
	}
	
	for(i=0;i<dim;i++)
	{
		scanf("%d",&vet[i]);
	}
	
	printf("%d",max(vet,dim));
	
	return 0;
}

int max(int vet[],int dim)
{
	int max,i;
	
	max=vet[0];
	for(i=1;i<dim;i++)
	{
		if(vet[i]>max)
		{
			max=vet[i];
		}
	}
	
	return max;
}