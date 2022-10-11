#include<stdio.h>
#define POS '+'
#define NEG '-'
#define NULLO ' '

int main(int argc, char *argv[])
{
	int valugu;
	char ris;
	printf("inserisci valore: ");
	scanf("%d",&valugu);
	if(valugu<0)
	{
		ris=NEG;
	}
	else if(valugu>0)
	{
		ris=POS;
	}
	else
	{
		ris=NULLO;
	}
	printf("segno del numero inserito: %c\n",ris);
}

