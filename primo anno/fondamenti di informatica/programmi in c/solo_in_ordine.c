#include <stdio.h>

#define MAX_LEN 20

int fill_arr_ord(int[],int,int[]);
void view_arr(int[],int);

int main(int argc, char* argv[])
{	
	int arr[MAX_LEN],arr_ord[MAX_LEN];
	int dim,dim_ord,i;
	
	do
	{
		printf("ins dim: ");
		scanf("%d",&dim);
	}
	while(dim<=0||dim>20);
	
	for(i=0;i<dim;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	dim_ord=fill_arr_ord(arr,dim,arr_ord);
	view_arr(arr_ord,dim_ord);
	
	return 0;
}

int fill_arr_ord(int arr[],int dim,int arr_ord[])
{
	int dim_ord,i;
	
	dim_ord=1;
	
	arr_ord[0]=arr[0];
	for(i=1;i<dim;i++)
	{
		if(arr[i]>arr_ord[dim_ord-1])
		{
			arr_ord[dim_ord]=arr[i];
			dim_ord++;
		}
	}
	
	return dim_ord;
}	

void view_arr(int arr[],int dim)
{
	int i;
	printf("\n\n");
	for(i=0;i<dim;i++)
	{
		printf("%d\n",arr[i]);
	}
}