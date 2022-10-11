#include<stdio.h>
#define ADD '+'
#define SUB '-'
#define MUL '*'
#define DIV '/'
int main(int argc,char* argv[])
{
	float a,b,ris,error=0;
	char op;
	printf("inserisci operatore: ");
	scanf("%c",&op);
	printf("operandi: ");
	scanf("%f %f",&a,&b);
	if(op==ADD)
	{
		ris=a+b;
	}
	else if(op==SUB)
	{
		ris=a-b;
	}
	else if(op==MUL)
	{
		ris=a*b;
	}
	else if(op==DIV)
	{
		if(b!=0)
		{
			ris=a/b;
		}
		else
		{
			error=1;
		}
	}
	else
	{
		error=1;
	}

	if(error==0)
	{
		printf("\nrisultato: %f\n",ris);
	}
	else
	{
		printf("\nX\n");
	}
}
