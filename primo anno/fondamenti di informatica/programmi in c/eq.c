#include<stdio.h>
#define IMP 'Y'
#define IND 'Z'
int main(int argc, char* argv[])
{
	float a,b,sol=0;
	printf("inserisci a: ");
	scanf("%f",&a);
	printf("inserisci b: ");
	scanf("%f",&b);
	if(a!=0&&b!=0)
	{
		sol=-(b/a);
	}
	else if(a!=0&&b==0)
	{
		sol=0;
	}
	else if(a==0&&b==0)
	{
		printf("%c\n",IND);
	}
	else
	{
		printf("%c\n",IMP);
	}

	if(sol!=0||a!=0&&b==0)
	{
		printf("soluzione: %f",sol);
	}
}
