#include<stdio.h>
int main()
{
	int input,risultato,temp,temp2,perfetto;

	printf("inserisci un intero: ");
	scanf("%d",&input);


	temp=input/2;
	perfetto=0;
	while(perfetto==0&&temp>1)
	{
		if(input%temp==0)
		{
			temp2=input/temp;
			if(temp2%temp==0)
			{
				perfetto=1;
				risultato=temp2/temp;
			}
		}
		temp--;
	}

	if(perfetto==0)
	{
		printf("no cubo\n");
	}
	else
	{
		printf("cubo nice, risultato:%d\n",risultato);
	}
}
