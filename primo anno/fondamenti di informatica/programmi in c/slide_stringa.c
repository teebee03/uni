#include<stdio.h>
#include<string.h>

#define MAX 50

void slide(char[],char[],int);

int main(int argc, char* argv[])
{
	int n;
	char str[MAX+1],str2[MAX+1];
	
	gets(str);
	
	do
	{
		printf("inserire quantita di slide: ");
		scanf("%d",&n);
	}
	while(n<0||n>MAX);

	slide(str,str2,n);

	printf("slidata di %d: %s\n",n,str2);
	
	return 0;
}

void slide(char str1[],char str2[],int slide)
{
	int i,j,dim;
	
	dim=strlen(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;j<slide;j++)
		{
			str2[j]=str1[dim-slide+j];
		}
		for(j=slide;j<dim;j++)
		{
			str2[j]=str1[j-slide];
		}
	}
	str2[dim]='\0';
}