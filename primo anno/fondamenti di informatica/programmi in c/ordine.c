#include<stdio.h>
int main(int argc, char* argv[])
{
	int a,b,c,temp=0;
	printf("inserisci i 3 valori: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	printf("%d  %d  %d",a,b,c);
}
