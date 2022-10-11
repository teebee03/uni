#include<stdio.h>
#include<string.h>
#define DIM_MAX 100
#define SOST '*'
#define INIZIO 'a'
#define FINE 'z'
#define ALFAB 26

int main(int argc,char* argv[])
{
	char input[DIM_MAX+1],charmax,out[DIM_MAX+1];
	int freq[ALFAB],i,max;
	
	gets(input);
	
	for(i=0;i<ALFAB;i++)
	{
		freq[i]=0;
	}
	
	max=0;
	for(i=0;input[i]!='\0';i++)
	{
		if(input[i]>=INIZIO && input[i]<=FINE)
		{
			freq[input[i]-INIZIO]++;
		}
	}
	
	max=0;
	charmax=' ';
	for(i=0;i<ALFAB;i++)
	{
		if(freq[i]>=max)
		{
			max=freq[i];
			charmax=INIZIO+i;
		}
	}
	
	for(i=0;input[i]!='\0';i++)
	{
		if(input[i]==charmax)
		{
			out[i]='*';
		}
		else
		{
			out[i]=input[i];
		}
	}
	
	printf("%s",out);
	
	return 0;
}