/*
leggere da file di testo ascii coordinate di un punto
per ogni riga p1_x p1_y  p2_x p2_y
ritornare la lunghezza massima
*/
#include<stdio.h>

#define NFILE "in"
#define NPTS 4

typedef struct cord_s
{
	float x;
	float y;
}
cord_t;

int main(int argc, char* argv[])
{
	FILE *f;
	cord_t c1,c2;
	float dist;
	float dist_max;
	
	f=fopen(NFILE,"r");
	if(f!=NULL)
	{
		dist_max=0;
		while(fscanf(f,"%f%f%f%f",&c1.x,&c1.y,&c2.x,&c2.y)==NPTS)
		{
			dist=distanza(c1,c2);
			if(dist>dist_max)
			{
				dist_max=dist;
			}
		}
		fclose(f);
		printf("distanza massima: %f",dist_max)
	}
	else
	{
		printf("errore\n");
	}
	
	
	return 0;
}

float distanza(cord_t p1,cord_t p2)
{
	float dist;
	
	dist=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	
	return dist;
}