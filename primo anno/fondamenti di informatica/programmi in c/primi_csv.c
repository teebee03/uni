/*
in: sequenza di valori di lunghezza a priori ignota, terminata quando l'utente inserisce un valore inferiore a 1

salvare i numeri primi nel file primi.csv
*/
#include<stdio.h>

#define SOGLIA 1
#define NAME "primi.csv"

int main(int argc,char* argv[])
{
	FILE *f;
	int val;
	
	f=fopen(NAME,"w");
	if(f!=NULL)
	{
		scanf("%d",&val);
		while(val>=SOGLIA)
		{
			if(isprimo(val))
			{
				fprintf(f,"%d,\n",val);
			}
			scanf("%d",&val);
		}
		fclose(f);
	}
	else
	{
		printf("problema nell'apertura del file\n");
	}	
	return 0;
}