#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int y;
	printf("�п�J�褸�~��:\n");
	scanf("%d",&y);
	if(y%400==0)
	printf("���|�~");
	else if(y%100==0)
	printf("�����~"); 
	else if(y%4==0)
	printf("����~");
	else
	printf("�����~"); 
	return 0;
}
