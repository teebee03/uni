#include<stdio.h>
int main(int argc, char* argv[])
{
	int a,b,mcm,mcd;
	do
	{
		scanf("%d",&a);
		scanf("%d",&b);
	}
	while(a<=0||b<=0);

	if(a>b)
	{
		mcm=a;
		mcd=b;
	}
	else
	{
		mcm=b;
		mcd=a;
	}

	while(a%mcd!=0||b%mcd!=0)
	{
		mcd--;
	}
	while(mcm%a!=0||mcm%b!=0)
	{
		mcm++;
	}

	printf("mcm: %d mcd: %d\n",mcm,mcd);
}
