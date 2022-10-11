#include<stdio.h>
#define MIN 1
#define MAX 1023
#define DIM 10
#define BASE 2
int main(int argc, char* argv[])
{
	int input,temp;
	int bin[DIM],i;
	do
	{
		scanf("%d",&input);
	}
	while(input<1||input>1023);

	temp=input;
	i=DIM-1;
	while(temp>0)
	{
		bin[i]=temp%BASE;
		temp/=BASE;
		i--;
	}

	printf("\n");
	for(i=0;i<DIM;i++)
	{
		printf("%d",bin[i]);
	}
	printf("\n");
	for(i=0;i<DIM;i++)
	{
		printf("\nvalore: %d\t\tindice: %d",bin[i],i);
	}

	return 0;
}
