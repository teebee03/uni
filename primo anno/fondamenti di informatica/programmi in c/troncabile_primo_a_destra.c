#include<stdio.h>

int is_primo(int);
int is_troncabile(int);

int main(int argc, char* argv[])
{
	int num;
	
	do
	{
		printf("inserire numero: ");
		scanf("%d",&num);
	}
	while(num<=0);
	
	printf("troncabile: %d\n",is_troncabile(num));	

	return 0;
}

int is_primo(int num)
{
	int primo,i,flag;
	
	flag=0;
	primo=1;
	if(num==1)
	{
		primo=0;
	}
	else if(num==2)
	{
		primo=1;
	}
	else if(num%2==0)
	{
		primo=0;
	}
	else
	{
		for(i=3;i<=num/2 && flag==0;i+=2) 
		{
			if (num%i==0) 
			{
				flag=1;
			}
		}
		
	}
	if(flag==1)
	{
		primo=0;
	}
	
	return primo;
}

int is_troncabile(int num)
{
	int 	tronc;
	
	tronc=1;
	while(num>0 && tronc==1)
	{
		if(is_primo(num)==0)
		{
			tronc=0;
		}
		else
		{
			num/=10;
		}
	}
	
	return tronc;
}