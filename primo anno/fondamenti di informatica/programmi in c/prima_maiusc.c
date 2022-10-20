/*
in: stringa con vocaboli
out: 1 se 
- almeno una cifra
- almeno un carattere no cifra no alfabeto
- almeno 8 caratteri
- no 2 caratteri uguali consecutivi
*/

#include<stdio.h>

#define DIM 100
#define MIN_LOW 'a'
#define MAX_LOW 'z'
#define MIN_HIGH 'A'
#define MAX_HIGH 'Z'
#define MIN_DIGIT '0'
#define MAX_DIGIT '9'

int pass(char[]);

int main(int argc,char* argv[])
{
	char str[DIM+1];
	gets(str);
	
	
}

int pass(char str[])
{
	int valid,i;
	
	i=0;
	while(valid==1 && str[i]!='\0')
	{
		
	}
}