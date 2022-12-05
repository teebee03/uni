#include<stdlib.h>
int main()
{
	int* x;
	int y=0;
	
	while(y<10000000)
	{
		x=(int*)malloc(sizeof(int));
		y++;
	}
	return 0;
}