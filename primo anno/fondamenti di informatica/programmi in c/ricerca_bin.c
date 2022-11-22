#include<stdio.h>

int main(int argc,char* argv[])
{
	
	return 0;
}

int ricerca_bin(int arr[],int len,int n)
{
	int trovato;
	
	if(len==1 && arr[0]==n)
	{
		if(*vet==n)
		{
			return 1;
		}
		return 0;
	}
	
	
	if(vet[dim]==n)
	{
		return 1;
	}
	
	if(n<*(vet+dim))
	{
		return ricerca_bin(vet,dim/2,n);
	}
	return ricerca_bin(vet+dim,dim-dim/2,n);
}