#include<stdio.h>
int main(int argc, char* argv[])
{
	int giornon,mesen,annon,giornoa,mesea,annoa,eta;
	printf("inserisci data di nascita in formato giorno, mese, anno: ");
	scanf("%d %d %d",&giornon,&mesen,&annon);
	printf("inserisci data attuale: ");
	scanf("%d %d %d",&giornoa,&mesea,&annoa);

	printf("\nannon: %d\n",annon);
	printf("\nannoa: %d\n",annoa);

	if(mesea>mesen||mesea==mesen&&giornoa>=giornon)
	{
		eta=annoa-annon;
	}
	else
	{
		eta=annoa-annon;
		eta--;
	}
	printf("eta: %d\n",eta);
}
