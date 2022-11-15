#include <stdio.h>

#define LEN_MAX 100

int cercasomma(int[],int,int);

int main(int argc, char* argv[])
{
	int arr[LEN_MAX];
	int k,temp,i,flag;
	
	i=0;
	scanf("%d",&temp);
	while(temp>0&&i<LEN_MAX)
	{
		arr[i]=temp;
		i++;
		scanf("%d",&temp);
	}
	
	do
	{
		printf("ins k: ");
		scanf("%d",&k);
	}
	while(k<=0);
	
	
	flag=cercasomma(arr,i,k);
	printf("ris: %d\n",flag);
	
	return 0;
}

int cercasomma(int arr[],int len,int k)
{
	int  flag,i,j;
	
	flag=0;
	for(i=0;i<len&&flag==0;i++)
	{
		for(j=i+1;j<len&&flag==0;j++)
		{
			if(arr[i]+arr[j]==k)
			{
				flag=1;
			}
		}
	}
	
	return flag;
}