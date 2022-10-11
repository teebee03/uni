#include<stdio.h>
#define BASE 10
int main(int argc,char* argv[])
{
	int numero,somma,temp;

	printf("inserisci numero: ");
	scanf("%d",&numero);

	if(numero<0)
	{
		temp=-numero;
	}
	else
	{
		temp=numero;
	}

	somma=0;
	while(temp>0)
	{
		somma+=temp%BASE;
		temp/=BASE;
	}

	printf("somma cifre: %d\n",somma);
}
