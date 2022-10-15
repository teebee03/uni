/*
	in: prezzo 50 prodotti finchè non arriva un numero non positivo, poi cash disponibile
	out: quanti prodotti si possono comprare
*/

#include<stdio.h>
#define DIM_MAX 50

int main(int argc,char* argv[])
{
	float prezzi[DIM_MAX],temp,cash,i,j;
	int dim;
	
	dim=0;
	scanf("%f",&temp);
	while(dim<DIM_MAX && temp>0)
	{
		prezzi[dim]=temp;
		dim++;
		scanf("%f",&temp);
	}
	
	cash=0;
	do
	{
		scanf("%f",&cash);
	}
	while(cash<=0);
	
	for(i=0;i<dim-1;i++)
	{
		for(j=0;i<dim-i-1;j++)
		{
			if(prezzi[j]>prezzi[j+1])
			{
				temp=prezzi[j];
				prezzi[j]=prezzi[j+1];
				prezzi[j+1]=temp;
			}
		}	
	}
	
	
}