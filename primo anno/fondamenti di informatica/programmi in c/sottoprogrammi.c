/*

sottoprogrammi

1 - acquisisce un valore
2 - di se è primo (1 se primo 0 altrimenti)
3 - calcola fattoriale
4 - palindromo
0 - termina

*/
#include<stdio.h>

void menu();
int scelta_menu();
int primo(int);

int main(int argc,char* argv[])
{
	int sel;
	
	sel=scelta_menu();
	
	
	
	return 0;
}


void menu()
{
	printf("1 - acquisire un valore\n");
	printf("2 - e' primo\n");
	printf("3 - calcola fattoriale\n");
	printf("4 - palindromo\n");
	printf("0 - termina\n");
}

int scelta_menu()
{
	int sel;
	do
	{
		menu();
		scanf("%d",&sel);
	}
	while(sel<0||sel>4);
	return sel;
}

int primo(int val)
{
	int isp;
	int meta,div;
	if(val>0)
	{
		if(val==2)
		{
			return 1;
		}
		else if(val==1||val%2==0)
		{
			return 0;
		}
		else
		{
			meta=val/2;
			isp=1;
			for(div=3;div<meta&&isp==1;div+=2)
			{
				if(val%div==0)
				{
					isp=0;
				}
			}
		}	
	}
	else
	{
		return -1;
	}
	
	return isp;
}
