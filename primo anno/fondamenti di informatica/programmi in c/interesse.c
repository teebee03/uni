#include<stdio.h>
int main(int argc,char* argv[])
{
	float saldo0,tasso,saldoobb,temp;
	int cont;

	do
	{
		scanf("%f",&saldo0);
		scanf("%f",&tasso);
		scanf("%f",&saldoobb);
	}
	while(saldo0<=0||tasso<=0||saldoobb<=0);

	cont=0;
	temp=saldo0;
	while(temp<saldoobb)
	{
		temp+=temp*tasso;
		cont++;
	}
	printf("al tasso attuale ci vogliono %d anno",cont);
}
