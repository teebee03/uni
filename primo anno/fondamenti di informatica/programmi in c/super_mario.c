#include<stdio.h>

#define MAX 16
#define N_SPAZI 2
#define BLOCCO '#'
#define SPAZIO ' '

void stampa_piramide(int);

int main(int argc, char* argv[])
{
	int h;
	
	do
	{
		printf("inserire altezza piramide: ");
		scanf("%d",&h);
	}
	while(h<=0||h>MAX);
	
	stampa_piramide(h);
	
	return 0;
}

void stampa_piramide(int h)
{
	int i,j;
	for(i=1;i<=h;i++)
	{
		/*stampa spazi iniziali*/
		for(j=0;j< (h-i);j++)
		{
			printf("%c",SPAZIO);
		}
		/*stampa blocchi prima parte*/
		for(j=0;j<i;j++)
		{
			printf("%c",BLOCCO);
		}
		/*stampa spazi in mezzo*/
		for(j=0;j<N_SPAZI;j++)
		{
			printf("%c",SPAZIO);
		}
		/*stampa blocchi seconda parte*/
		for(j=0;j<i;j++)
		{
			printf("%c",BLOCCO);
		}
		printf("\n");
	}
}