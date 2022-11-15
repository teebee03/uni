/*
non finito
non finito
non finito
non finito
non finito
non finito
non finito
non finito
non finito
non finito
*/
#include<stdio.h>
#include<string.h>

#define MAX_LEN 30
#define MAX_DIM 10

typedef struct album_s
{
	char titolo[MAX_LEN+1];
	char autore[MAX_LEN+1];
	int anno;
	int n_tracce;
	int ore;
	int minuti;
	int secondi;
	float prezzo;
	
}album_t;

int album_max(album_t[],int);
void stampa_album(album_t );


int main(int argc, char* argv[])
{
	album_t arr[MAX_DIM];
	int dim,i,pos_max;
	
	do
	{
		printf("ins dim: ");
		scanf("%d",&dim);
	}
	while(dim<=0||dim>MAX_DIM);
	
	for(i=0;i<dim;i++)
	{
		printf("titolo: ");
		gets(arr[i].titolo);
		getchar();
		printf("autore: ");
		gets(arr[i].autore);
		getchar();
		printf("anno: ");
		scanf("%d",&arr[i].anno);
		printf("ore: ");
		scanf("%d",&arr[i].ore);
		printf("minuti: ");
		scanf("%d",&arr[i].minuti);
		printf("secondi: ");
		scanf("%d",&arr[i].secondi);
		printf("prezzo: ");
		scanf("%f",&arr[i].prezzo);
	}
	
	
	for(i=0;i<dim;i++)
	{
		stampa_album(arr[i]);
	}
	//posmax=album_max(arr,dim);
	//stampa_album(arr[pos_max]);
	
	return 0;
}

int album_max(album_t arr[],int dim)
{
	int pos,i;
	pos=0;
	for(i=1;i<dim;i++)
	{
		if(arr[i].ore>arr[pos].ore)
		{
			pos=i;
		}
		else if(arr[i].ore==arr[pos].ore && arr[i].minuti>arr[pos].minuti)
		{
			pos=i;
		}
		else if(arr[i].ore==arr[pos].ore && arr[i].minuti==arr[pos].minuti && arr[i].secondi>arr[pos].secondi)
		{
			pos=i;
		}
	}
	
	return pos;
}

void stampa_album(album_t a)
{
	puts(a.titolo);
	puts(a.autore);
	printf("%d\n",a.anno);
	printf("%d\n",a.ore);
	printf("%d\n",a.minuti);
	printf("%d\n",a.secondi);
	printf("%f\n",a.prezzo);
}
