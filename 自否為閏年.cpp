#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int y;
	printf("請輸入西元年數:\n");
	scanf("%d",&y);
	if(y%400==0)
	printf("為閏年");
	else if(y%100==0)
	printf("為平年"); 
	else if(y%4==0)
	printf("為潤年");
	else
	printf("為平年"); 
	return 0;
}
