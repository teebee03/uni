#include<stdio.h>
#define DIM 100000
int main()
{
	int x[DIM];
	int i=0;
	while(i<DIM)
	{
		printf("%d\t",x[i]);
		i++;
	}
	printf("\n");
	return 0;
}
