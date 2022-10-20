/*
in: array di reali
out: array di valori in cui ogni elemento è la somma di se stesso e i precedenti
*/

#include<stdio.h>

#define DIM 5

void somma_prec(float[],int dim,float[]);
void load_arr(float[],int);
void load_arr_0(float[],int);

int main(int argc,char* argv[])
{
	float arr[DIM],arr_sum[DIM];
	int i;
	
	load_arr(arr,DIM);
	load_arr_0(arr_sum,DIM);
	
	somma_prec(arr,DIM,arr_sum);
	
	printf("\n\n");
	for(i=0;i<DIM;i++)
	{
		printf("%f\n",arr_sum[i]);
	}
	printf("\n\n");
}


void load_arr(float vet[],int dim)
{
	int i;
	for(i=0;i<dim;i++)
	{
		scanf("%f",&vet[i]);
	}
}
void load_arr_0(float vet[],int dim)
{
	int i;
	for(i=0;i<dim;i++)
	{
		vet[i]=0;
	}
}

void somma_prec(float arr[],int dim,float arr_sum[])
{
	int i,j;
	float temp;
	
	for(i=0;i<dim;i++)
	{
		temp=0;
		for(j=i;j>=0;j--)
		{
			temp+=arr[j];
		}
		arr_sum[i]=temp;
	}
}