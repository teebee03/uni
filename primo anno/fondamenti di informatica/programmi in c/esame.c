#include<stdio.h>
#define SUF 18
int main(int argc, char* argv[])
{
	int v1,v2,media,promosso=0;
	printf("inserisci primo voto: ");
	scanf("%d",&v1);
	printf("inserisci secondo voto: ");
	scanf("%d",&v2);
	printf("\n");
	if(v1>=SUF&&v2>=SUF)
	{
		promosso=1;
		media=(v1+v2)/2;
		if((v1+v2)%2!=0)
		{
			media++;
		}
	}
	if(promosso==1)
	{
		printf("promosso\n");
		printf("media: %d\n",media);
	}
	else
	{
		printf("bocciato\n");
	}
}
