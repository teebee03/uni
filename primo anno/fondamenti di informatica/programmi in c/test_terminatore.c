#include<stdio.h>
#include<string.h>
#define LEN 10
int main(int argc, char*argv[])
{
	char stringa[LEN];
	int i;
	
	for(i=0;i<LEN;i++)
	{
		stringa[i]=i+'a';
	}
	
	printf("%s",stringa);
	
	return 0;
}