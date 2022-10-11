#include<stdio.h>
#define PROF '+'
#define PERD '-'
#define PARI 'x'
int main(int argc, char* argv[])
{
	float costo,pvendita,margine;
	printf("inserisci costo: ");
	scanf("%f",&costo);
	printf("inserisci pvendita ");
	scanf("%f",&pvendita);
	margine=pvendita-costo;
	if(margine>0)
	{
		printf("margine: %f",margine);
		printf("%c\n",PROF);
	}
	else if(margine<0)
	{
		printf("perdita: %f",margine);
		printf("%c\n",PERD);
	}
	else
	{
		printf("nessun margine, %c\n",PARI);
	}
}
