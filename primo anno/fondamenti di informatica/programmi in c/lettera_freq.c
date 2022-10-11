#include<stdio.h>
#define DIM_MAX 100
#define STOP '*'
#define SOST '*'
#define INIZIO 'a'
#define FINE 'z'
#define ALFAB 26
int main(int argc,char* argv[])
{
	char temp,input[DIM_MAX],charmax;
	int freq[ALFAB],dim,i,max,cont;
	
	dim=0;
	do
	{
		scanf("%c",&temp);
		if(temp!=STOP)
		{
			input[dim]=temp;
			dim++;
		}
	}
	while(dim<DIM_MAX&&temp!=STOP);
	
	for(i=0;i<ALFAB;i++)
	{
		freq[i]=0;
	}
	
	for(i=0;i<dim;i++)
	{
		if(input[i]>=INIZIO && input[i]<=FINE)
		{
			freq[input[i]-INIZIO]++;  /*MOSTRO!!!*/
		}
	}
		
	max=0;
	charmax=' ';
	for(i=ALFAB-1;i>=0;i--)
	{
		if(freq[i]>max)
		{
			max=freq[i];
			charmax=INIZIO+i;
		}
	}
	
	for(i=0;i<dim;i++)
	{
		if(input[i]==charmax)
		{
			input[i]=SOST;
		}
	}
	
	for(i=0;i<dim;i++)
	{
		printf("%c",input[i]);
	}
	
	return 0;
}