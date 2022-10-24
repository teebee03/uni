#include<stdio.h>

#define MAX 10

void crea_tartaglia(int[][MAX],int);
void stampa_tartaglia(int[][MAX],int);

int main(int argc, char* argv[])
{
	int mat[MAX][MAX],h;
	
	do
	{
		printf("inserisci altezza: ");
		scanf("%d",&h);
	}
	while(h<=0 || h>MAX);
	
	crea_tartaglia(mat,h);
	stampa_tartaglia(mat,h);
	
	return 0;
}

void crea_tartaglia(int mat[][MAX],int h)
{
	int i,j;
	
	for(i=0;i<=h;i++)
	{
		if(i==0)
		{
			mat[i][i]=1;
		}
		
		for(j=0;j<=i;j++)
		{
			if(j==0||j==i)
			{
				mat[i][j]=1;
			}
			else
			{
				mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
			}
		}
	}
}

void stampa_tartaglia(int mat[][MAX],int h)
{
	int i,j;
	for(i=0;i<h;i++)
	{	
		for(j=0;j<=i;j++)
		{
			printf("%d",mat[i][j]);
		}
		
		printf("\n");
	}
}