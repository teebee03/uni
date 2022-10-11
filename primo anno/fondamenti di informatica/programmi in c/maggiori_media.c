#include<stdio.h>
#define DIM 5
int main(int argc, char* argv[])
{
	int vals[DIM];
	int i,tot;
	float avg;

	tot=0;
	for(i=0;i<DIM;i++)
	{
		scanf("%d",&vals[i]);
		tot+=vals[i];
	}
	avg=(float)tot/DIM;

	printf("\n\nvalori maggiori alla media: \n");
	for(i=0;i<DIM;i++)
	{
		if(vals[i]>avg)
		{
			printf("%d\n",vals[i]);
		}
	}
}

