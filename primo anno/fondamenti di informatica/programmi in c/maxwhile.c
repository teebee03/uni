#include <stdio.h>
#include <limits.h>
#define TIMES 20
int main(int argc, char* argv[])
{
	int input,max=INT_MIN,cont=0;
	while(cont<TIMES)
	{
		printf("inserisci numero: ");
		scanf("%d",&input);
		if(input>max)
		{
			max=input;
		}
		cont++;
	}
	printf("il massimo è %d\n",max);
	return 0;
}
