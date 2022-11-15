/*
non finito
non finito
non finito
non finito
non finito
non finito
non finito
non finito
non finito
non finito
*/

#include <stdio.h>

void sortarr(int[],int,int);

int main(int argc, char* argv[])
{
	int arr[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	sortarr(arr,10,1);
	
	printf("\n\n----\n\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}

void sortarr(int arr[],int dim, int updown)
{
	int i,j,temp;
	if(updown==1||updown==-1)
	{
		for(i=0;i<dim-1;i++)
		{
			for(j=i+1;j<dim;j++)
			{
				if(updown==1)
				{
					if(arr[j]<arr[i])
					{
						temp=arr[j];
						arr[j]=arr[i];
						arr[i]=temp;
					}
				}
				else
				{
					if(arr[j]>arr[j-1])
					{
						temp=arr[j-1];
						arr[j-1]=arr[j];
						arr[j]=temp;
					}
				}
			}
		}
	}
}