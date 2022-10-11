#include<stdio.h>
#define DIMFIS 100
#define STOP '*'
#define SOST '*'
#define INIZIO 'a'
#define FINE 'z'
#define ALFA 26

int main(int argc, char* argv[])
{
	char seq[DIMFIS],c,carfreq;
	int i,dimlog,max,let[ALFA];
	i=0;
	c=' ';
	while(c!=STOP && i<DIMFIS)
	{
		scanf("%c",&c);
		if(c!=STOP)
		{
			seq[i]=c;
			i++;
		}
	}
	dimlog=i;
	for(i=0;i<ALFA;i++)
		let[i]=0;
	max=0;
	for(i=0;i<dimlog;i++)
	{
		if(seq[i]>=INIZIO && seq[i]<=FINE)
			let[seq[i]-INIZIO]++;
		if(let[seq[i]-INIZIO]>max)
			max=let[seq[i]-INIZIO];
	}
	i=0;
	while(let[i]!=max)
		i++;
	carfreq=INIZIO+i;
	for(i=0;i<dimlog;i++)
	{
		if(seq[i]==carfreq)
			seq[i]=SOST;
	}
	printf("\n\n%c\n\n",carfreq);
	for(i=0;i<dimlog;i++)
		printf("%c",seq[i]);
	return 0;
}
