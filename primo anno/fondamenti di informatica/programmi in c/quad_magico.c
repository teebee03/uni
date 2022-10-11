#include<stdio.h>
#define NR 3
#define NC 3
int main(int argc, char* argv)
{
	int i,j,mag,somma,tot;
	int mat[NR][NC];
	for(i=0;i<NR;i++)
	{
		for(j=0;j<NC;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	mag=1;
	tot=0;
	somma=0;
	for(i=0;i<NC;i++)
	{
		somma+=mat[i][i];
	}
	
	for(i=NR-1;i>=0;i--)
	{
		tot+=mat[i][NR-i-i];
	}
	if(somma!=tot)
	{
		mag=0;	
	}
	
	
	for(i=0;i<NR&&mag==1;i++)
	{
		for(j=0,tot=0;j<NC;j++)
		{
			tot+=mat[i][j];
		}
		if(tot!=somma)
		{
			mag=0;
		}
	}
	
	for(j=0;j<NC&&mag==1;j++)
	{
		for(i=0,tot=0;i<NR;i++)
		{
			tot+=mat[i][j];
		}
		if(tot!=somma)
		{
			mag=0;
		}
	}
	
	printf("e' magico: %d\nsomma: %d\n",mag,somma);
}
