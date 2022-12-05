#include<stdio.h>

#define MAXLEN 50
#define NCLUB 4
#define NPUNTI 6	

int main(int argc, char* argv[])
{
	FILE *fin,*fout;
	int somma,temp,i,j;
	char nome[MAXLEN+1];
	
	fin=fopen("squadre.txt","r");
	fout=fopen("classifica.txt","w");
	if(fin!=NULL&&fout!=NULL)
	{
		for(i=0;i<NCLUB;i++)
		{
			fscanf(f,"%s",&nome);
			somma=0;
			for(j=0;j<NPUNTI;j++)
			{
				fscanf(f,"%d",&temp);
				somma+=temp;
			}
			fprintf(f,"%s",nome);
			fprintf(f,"%d",somma);
		}
		
		fclose(fin);
		fclose(fout;)
	}
	else
	{}
	
	return 0;
}