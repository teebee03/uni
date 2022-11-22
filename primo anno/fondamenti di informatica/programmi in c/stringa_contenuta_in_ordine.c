/*
in : 2 stringhe
out: se sono presenti tutti i caratteri di a nello stesso ordine
*/

#include<stdio.h>
#define MAX_LEN 30

int main(int argc,char* argv[])
{
	
	return 0;
}

/*per definizione stra è <= di strb*/
int appartiene(char stra[],char strb[])
{
	if(*stra=='\0')
	{
		return 1;
	}
	if(*strb=='\0')
	{
		return 0;
	}
	if(*stra==*strb)
	{
		return appartiene(stra+1,strb+1);
	}
	return appartiene(stra,strb+1);
}