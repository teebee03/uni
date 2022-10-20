/*
in: array di 10 valori interi
out: n di coppie di n ugugali valide(valida --> num[i]==num[j] && i<j)
*/
#include<stdio.h>

#define DIM 5

void load_arr(int[],int);
int conta_coppie(int[],int);

int main(int argc,char* argv[])
{
	int vet[DIM],coppie;
	load_arr(vet,DIM);
	coppie=conta_coppie(vet,DIM);
	printf("coppie: %d",coppie);
	
}

void load_arr(int vet[],int dim)
{
	int i;
	for(i=0;i<dim;i++)
	{
		scanf("%d",&vet[i]);
	}
}

int conta_coppie(int arr[],int dim)
{
	int ncoppie,i,j;
	
	ncoppie=0;
	for(i=0;i<dim;i++)
	{
		for(j=i+1;j<dim;j++)
		{
			if(arr[i]==arr[j])
			{
				ncoppie++;
			}
		}	
	}
	return ncoppie;
}