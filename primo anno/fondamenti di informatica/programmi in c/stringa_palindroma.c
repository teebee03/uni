#include<stdio.h>
#include<string.h>
#define MAXLEN 100
int main(int argc, char* argv[])
{
	char frase[MAXLEN+1];
	int dim,i1,i2,pal;
	
	gets(frase);
	
	
	for(dim=0;frase[dim]!='\0';dim++)
	{}
	
	i1=0;
	i2=dim-1;
	pal=1;
	while(i1<i2&&pal==1)
	{
		if(frase[i1]==frase[i2])
		{
			i1++;
			i2--;
		}
		else
		{
			pal=0;
		}
	}
	
	printf("\n%d\n",pal);
}
