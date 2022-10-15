#include<stdio.h>
#define SUS 0
int main(int argc, char* argv[])
{
	int input,fat,i;
	
	do
	{
		scanf("%d",&input);
	}
	while(input<0);
	
	fat=1;
	for(i=input;i>0;i--)
	{
		fat*=i;
	}
	
	printf("%d\n",fat);
}