#include<stdio.h>
#include<string.h>
#define MAX_LEN 100
#define INIZIO 'a'
#define FINE 'z'
int main(int argc, char* argv[])
{
	char frase[MAX_LEN+1];
	int i,nvoc,ncons;
	
	gets(frase);
	
	for(i=0;frase[i]!='\0';i++)
	{
		if(frase[i]>=INIZIO && frase[i]<=FINE)
		{
			if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u')
			{
				nvoc++;
			}
			else
			{
				ncons++;
			}
		}
	}
	
	printf("%d\t%d\n",nvoc,ncons);
	
	return 0;
}