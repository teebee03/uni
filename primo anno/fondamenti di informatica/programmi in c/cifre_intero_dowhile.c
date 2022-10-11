#include<stdio.h>
#define BASE 10
int main(int argc,char* argv[])
{
	int input,cifre=0;
	printf("inserisci numero: ");
	scanf("%d",&input);
	do
	{
		input/=BASE;
		cifre++;
	}
	while(input>0);
	printf("cifre: %d\n",cifre);
}
