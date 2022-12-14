/*
in: file binario con valori interi, il primo valore è il numero di valori che seguiranno
out: secondo file con per primo il numero di valori e poi tutti i valori in ordine inverso
*/
#include<stdio.h>



int main(int argc,char* argv[])
{
	FILE *in,*out;
	int nel,i;
	int *dati;
	
	in=fopen(argv[1],"rb");
	out=fopen(argv[2],"wb");
	/*controlli fopen*/
	
	fread(&snel,sizeof(int),in);
	
	dati=(*int)malloc(sizeof(int)*nel);
	fread(dati,sizeof(int),nel,in);
	
	for(i=nel-1;i>=0;i--)
	{
		fwrite(dati+i,sizeof(int),1,out);
	}
	free(dati);
	
	fclose(in);
	fclose(out);
	
	return 0;
}