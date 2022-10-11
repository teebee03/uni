#include<stdio.h>
#define DIM 3

typedef struct data_s
{
	int giorno;
	int mese;
	int anno;
}
data_t;

int main(int argc,char* argv[])
{
	data_t persone[DIM],data_in;
	int i,contc,contn;

	for(i=0;i<DIM;i++)
	{
		scanf("%d%d%d",&persone[i].giorno,&persone[i].mese,&persone[i].anno);
	}
	printf("\ndata speciale: ");
	scanf("%d%d%d",&data_in.giorno,&data_in.mese,&data_in.anno);

	contc=0;
	contn=0;
	for(i=0;i<DIM;i++)
	{
		if(data_in.mese==persone[i].mese && data_in.giorno==persone[i].giorno)
		{
			contc++;
			if(data_in.anno==persone[i].anno)
			{
				contn++;
			}
		}
	}
	printf("\nstessi compleanni: %d\nstessa data di nascita: %d\n",contc,contn);
	return 0;
}
