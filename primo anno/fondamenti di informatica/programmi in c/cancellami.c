#include<stdio.h>
int main(int argc,char* argv[])
{
	int x,y;
	int *x1,*y1;
	x=1212;
	y=1313;
	x1=&x;
	y1=&y;
	printf("%d\t%d\n\n%d\n%d",x,y,*x1,*y1);
	return 0;
}