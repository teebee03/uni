/*
sottopro
in: stringa
out: una nuova stringa che contiene solo le consonanti della stringa di partenza

pro
in: da riga di comando una stringa 
out: le consonanti presenti (usa sottopro)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char* argv[])
{
	char* str;
	char* strcons;
	
	if(argc==2)
	{
		str=argv[1];
		strcons = cons(str);
		if(strcons!=NULL)
		{
			printf("%s\n",strcons);
			free(strcons);
		}
	}
	else
	{
		printf("argomenti non coerenti\n");
	}
	
	return 0;
}

char* cons(char str[])
{
	int i,j,nc;
	char* con;
	
	nc=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(iscons(str[i])==1)
		{
			nc++;
		}
	}
	con=(char*)malloc((nc+1)*sizeof(char));
	
	if(con!=NULL)
	{
		j=0;
		for(i=0;str[i]!='\0';i++)
		{
			if(iscons(str[i])==1)
			{
				*(con+j)=str[i];
				j++;
			}
		}
		*(con+j)='\0';
	}
	else
	{
		printf("errore nell' allocazione");
	}
	
	return con;
}