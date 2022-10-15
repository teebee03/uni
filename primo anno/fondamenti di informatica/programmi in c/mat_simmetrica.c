/*
in:matrice quad dim 3
out: 1 se simmetrica sennò 0
*/
#include<stdio.h>
#define DIM 3
int main(int argc,char* argv[])
{
	int mat[DIM][DIM],i,j,simm;
	
	for(i=0;i<DIM;i++)
	{
		for(j=0;j<DIM;j++)
		{
			scanf("%d",&mat[i][j])
		}
	}
	
	simm=1;
	for(i=0;i<DIM && simm==1;i++)
	{
		for(j=0;j<DIM && simm==1;j++)
		{
			if(mat[i][j]!=mat[j][i])
			{
				simm=0;
			}
		}
	}
	
	printf("%d",simm);
}