#include<stdio.h>
#define BASE 10
int main(int argc, char* argv[])
{
	int num,specchio,temp,pal;
	do
	{
		scanf("%d",&num);
	}
	while(num<=0);

	pal=0;
	if(num%10==0)
	{}
	else
	{
		specchio=0;
		temp=num;
		while(temp>0)
		{
			specchio+=temp%BASE;
			specchio*=BASE;
			temp/=BASE;
		}
		specchio/=BASE;
		if(specchio==num)
		{
			pal=1;
		}
	}

	if(pal==0)
	{
		printf("non e' palindromo spe:%d\n",specchio);
	}
	else
	{
		printf("e' palindromo spe:%d\n",specchio);
	}
}
