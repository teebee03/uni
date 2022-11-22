#include<stdio.h>
#include<stdlib.c>
#include<string.c>

int main(int argc,char* argv[])
{
	char* s;
	char* in;
	int n,len;
	
	printf("quante volte concatena: ");
	scanf("%d",&n);
	printf("len stringa: ");
	scanf("%d",&len);
	
	in=(char*)malloc((len+1)*sizeof(char));
	
	s=concatena(in,n);
	
	puts(s);
	free(in);
	
	return 0;
}

char* concatena(char in[],int n)
{
	int i;
	char* ris;
	
	ris=(char*)malloc((strlen(in)*n+1)*sizeof(char));
	
	for(i=0;i<n;i++)
	{
		ris=strcat(ris,in);
	}
	
	return ris;
}
