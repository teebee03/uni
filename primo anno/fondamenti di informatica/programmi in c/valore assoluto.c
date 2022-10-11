//prende in input un numero e restituisci il suo valore assoluto
#include<stdio.h>
int main(int argc, char *argv[])
{
	int n=0;
	int abs;
	printf("inserire valore: ");
	scanf("%d",&n);
	if(n<0)
	{
		abs=-n;
	}
	else
	{
		abs=n;
	}
	printf("valore assoluto: %d\n",abs);
	return 0;
}
