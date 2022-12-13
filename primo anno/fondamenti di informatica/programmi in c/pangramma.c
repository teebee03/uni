/*
in: stringa
pangramma se ogni lettera dell'alfabeto compare almeno una volta(non importa se maiuscole o minuscole)
out: 1 se stringa è pangramma sennò 0
*/
#include<stdio.h>
#define DIM 100
#define STARTUN 'a'
#define ENDUN 'z'
#define STARTUP 'A'
#define ENDUP 'Z'
#define ALPH_LEN 'z'-'a'

int main(int argc,char* argv[])
{
	
	return 0;
}

int pangramma(char in[])
{
	int i,pan;
	int occorrenze[ALPH_LEN];
	for(i=0;i<ALPH_LEN;i++)
	{
		occorrenze[i]=0;
	}
	
	for(i=0;in[i]!='\0';i++)
	{
		if(in[i]>=STARTUN && in[i]<=ENDUN)
		{
			occorrenze[in[i]-STARTUN]=1;
		}
		if(in[i]>=STARTUP && in[i]<=ENDUP)
		{
			occorrenze[in[i]-STARTUP]=1;
		}
	}
	
	/*guardare occorrenze*/
	pan=1;
	for(i=0;i<ALPH_LEN && pan==1;i++)
	{
		if(occorrenze[i]==0)
		{
			pan=0;
		}
	}
	
	return pan;
}






















