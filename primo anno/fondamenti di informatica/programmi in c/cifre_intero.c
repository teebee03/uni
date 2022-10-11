#include <stdio.h>
#define BASE 10
int main(int argc, char* argv[])
{
	int input,cifre=1;
	do
	{
		printf("inserire numero: ");
		scanf("%d",&input);
	}
	while(input<=0);
	while(input>BASE)
	{
		input/=BASE;
		cifre++;
	}
	printf("cifre: %d\n",cifre);
}
