#include<stdio.h>
int main(int argc, char *argv[])
{
	int num;
	int pari;
	printf("inserisci numero: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		pari=1;
	}
	else
	{
		pari=0;
	}
	printf("%d\n",pari);
}
