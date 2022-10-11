#include<stdio.h>
#define NC 3
#define NR 3
int main(int argc,char* argv[])
{
	int i,j,identita;
	int mat[NR][NC];

	for(i=0;i<NR;i++)
	{
		for(j=0;j<NC;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}

	identita=1;
	i=0;
	while(i<NR&&identita==1)
	{
		j=0;
		while(j<NC&&identita==1)
		{
			if(i==j && mat[i][j]!=1)
			{
				identita=0;
			}
			else if(i!=j && mat[i][j]!=0)
			{
				identita=0;
			}
			j++;
		}
		i++;
	}
	printf("identita: %d\n",identita);
}
