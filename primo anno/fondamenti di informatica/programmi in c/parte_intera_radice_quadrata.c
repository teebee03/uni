#include<stdio.h>
int main(int argc, char* argv[])
{
	int num,rad,quadrato;
	do
	{
		printf("inserisci numero positivo: ");
		scanf("%d",&num);
	}
	while(num<=0);

	rad=1;
	quadrato=1;
	while(quadrato<=num)
	{
		quadrato=rad*rad;
		rad++;

	}
	rad--;
	
	printf("radice: %d",rad);
	return 0;
}
