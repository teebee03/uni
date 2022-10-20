void print_mat(int mat[][NCD],int nr, int nc)
{
	int i,j;
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			printf("%d\t",mat[i][j])
		}
		printf("\n");
	}
}
