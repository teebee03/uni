/*
c0=1
cn=sum_0^(n-1){ci*cn-1-1}
in:
out:
*/
#include<stdio.h>

int main(int argc,char* argv[])
{
	
	return 0;
}

void arr_catalan(int arr[],int x)
{
	int i;
	for(i=0;i<=x;i++)
	{
		arr[i]=catalan(n);
	}
}

int catalan(int x)
{
	int c;
	if(x==0)
	{
		c=1;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			c+=cat(i)*cat(n-i-1);
		}
	}
	
	return c;
}