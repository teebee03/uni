#include<stdio.h>
int main()
{
	int i=0;
	char str[5]={'1','2','3','4','5'};
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
	return 0;
}
