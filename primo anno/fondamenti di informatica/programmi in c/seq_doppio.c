#include<stdio.h>
#define STOP 0
int main(int argc, char* argv[])
{
	int nuovo,vecchio;
	scanf("%d",&vecchio);
	if(vecchio!=STOP)
	{
		scanf("%d",&nuovo);
		while(nuovo!=STOP)
		{
			if(nuovo==vecchio*2)
			{
				printf("coppia: %d %d\n",vecchio,nuovo);
			}
			vecchio=nuovo;
			scanf("%d",&nuovo);
		}
	}
}
