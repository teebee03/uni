/*
in: 2 date definite con struct
out: giorni tra esse
*/
#include<stdio.h>

typedef struct data_s
{
	int giorno;
	int mese;
	int anno;
	
}data_t;

int diff_date(data_t* da,data_t* a);

int main(int argc, char* argv[])
{
	data_t da,a;
	int diff;
	
	diff=diff_date(&da,&a);
	
	
	return 0;
}

int diff_date(data_t* da,data_t* a)
{
	int diff,i;
	
	diff=0;
	if(da->anno==a->anno)
	{
		if(da->mese==a->mese)
		{
			diff+=a->giorno-da->giorno;
		}
		else
		{
			diff-=giorni_mese(da->mese);
			for(i=da->mese;i<a->mese;i++)
			{
				diff+=giorni_mese(i,da->anno);
			}		
			diff+=a->giorno;
		}
	}
	else
	{
		/*diff se anni diversi*/
	}
	
	
	
	return diff;
}
