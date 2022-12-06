/*
chiedere all'utente nome di un file di testo(max 40 caratteri)
conta e visualizza il numero di caratteri presenti nel file e visualizza il carattere con il codice ascii più grande trovato nel file
*/
#include<stdio.h>

#define LMAX 40

int main(int argc, char* argv[])
{
	FILE* fin;
	char alpha,cmax;
	int ncar,ris;
	char nome[LMAX+1];
	
	gets(nome);
	
	fin=fopen(nome,"r");
	
	if(fin!=NULL)
	{
		ris=fscanf(fin,"%c",&alpha);
		if(!feof(fin))
		{
			cmax=alpha;
			ncar=1;
			while(fscanf(fin,"%c",&alpha)==1)
			{
				ncar++;
				if(alpha>cmax)
				{
					cmax=alpha;
				}
			}
		}
		else
		{
			ncar=0;
		}
		fclose(fin);
		printf("%d\t[%c]\n",ncar,nmax);
	}
	else
	{
		printf("problema nell'apertura del file\n");
	}
	
	return 0;
}