/*
inserimento con terminatore--> valore <0

salvare su file per ogni riga valore e n divisori 

*/

#include<stdio.h>

#define STOP 0
#define NFILE "out"

int main(int argc, char* argv[])
{
	FILE *f;
	int num,ndiv;
	
	f = fopen(NFILE,"w");
	if(f!=NULL)
	{
		scanf("%d",&num);
		while(num>STOP)
		{
			ndiv=n_divisori(num);
			
			fprintf(f,"%d\t%d\n",num,ndiv);
			
			scanf("%d",&num);
		}
		
		fclose(f);
	}
	else
	{
		printf("errore nell'apertura del file\n");
	}
	return 0;
	
}