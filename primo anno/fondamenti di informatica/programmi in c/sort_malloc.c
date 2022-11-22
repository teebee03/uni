/*
in: quanti dati interi da memorizzare
acquisirli, ordinarli in modo crescente e visualizzarli
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	int *v;
	int n,i;
	
	do
	{
		scanf("%d",&n);
	}
	while(n<=1);
	
	v = (int*)malloc(n*sizeof(int));
	
	if(v!=NULL)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",v+i);
		}
		
		/*bsort(v,n);*/
		
		for(i=0;i<n;i++)
		{
			printf("%d\t",*(v+i));
		}
		printf("\n");
		
		free(v);
	}
	else
	{
		printf("errore di allocazione di %d interi\n",n);
	}

	
	return 0;
}