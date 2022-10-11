#include<stdio.h>
#define DIM_MAX 10
#define DIM_MIN 2
int main(int argc, char* argv[])
{
	int mat_in[DIM_MAX][DIM_MAX];
	int mat_out[DIM_MAX][DIM_MAX];
	int i,j,dim;

	do
	{
		scanf("%d",&dim);
	}
	while(dim<DIM_MIN||dim>DIM_MAX);

	for(i=0;i<dim;i++)
	{
		for(j=0;j<dim;j++)
		{
			scanf("%d",&mat_in[i][j]);
		}
	}

	for(i=0;i<dim;i++)
	{
		for(j=0;j<dim;j++)
		{
			mat_out[i][j]=mat_in[i][dim-1-j];
		}
	}

	printf("\n\n\nmat_out:\n\n");
	for(i=0;i<dim;i++)
	{
		for(j=0;j<dim;j++)
		{
			printf("%d\t",mat_out[i][j]);
		}
		printf("\n");
	}

	return 0;
}
