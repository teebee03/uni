/*
in: nome di un file binario, array di valori interi
out: array riempito con i dati letti dal file binario, n di dati con cui ha popolato l'array
1 valore del file: indica quanti altri valori ci sono nel file
*/

int popola(char nomef[],int arr[])
{
	int nval;
	FILE* fin;
	
	fin=fopen(nome,"rb");
	if(fin!=NULL)
	{
		fread(&nval,sizeof(int),1,fin);
		freat(v,sizeof(int),nval,fin);
		fclose(fin);
	}
	else
	{
		printf("problemi nell'apertura del file");
		nval=0;
	}
	return nval;
}