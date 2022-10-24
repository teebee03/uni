#include<stdio.h>

int conta_cifre(int);
void stampa_con_padding(int,int,int);

int main(int argc, char* argv[])
{
	int num,k,cifre;
	
	do
	{
		printf("inserire numero di partenza: ");
		scanf("%d",&num);
	}
	while(num<=0);
	do
	{
		printf("inserire numero di cifre desiderato: ");
		scanf("%d",&k);
	}
	while(k<=0);
	
	cifre=conta_cifre(num);
	stampa_con_padding(num,cifre,k);
	
	return 0;
}

int conta_cifre(int num)
{
	int i;
	
	i=0;
	while(num>0)
	{
		num/=10;
		i++;
	}
	
	return i;
}

void stampa_con_padding(int num,int cifre,int k)
{
	while(cifre<k)
	{
		printf("0");
		cifre++;
	}
	printf("%d\n",num);
}