/*
in: 10 int 
out: 0 no duplicati 1 se duplicati
*/
#include<stdio.h>
#define DIM 3
int main(int argc,char* argv[])
{
	int input[DIM],dup,i,j;
	
	for(i=0;i<DIM;i++)
	{
		scanf("%d",&input[i]);
	}
	
	dup=0;
	for(i=0;i<DIM,dup==0;i++)
	{
		for(j=0;j<DIM,dup==0;j++)
		{
			if(input[j]==input[i] && j!=i)
			{
				dup=1;
			}
		}
	}
	
	printf("\n%d\n",dup);
}